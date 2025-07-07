document.addEventListener('DOMContentLoaded', () => {
    const allCheckboxes = document.querySelectorAll('.course input[type="checkbox"]');
    const allCourses = document.querySelectorAll('.course');

    // Función para verificar si una materia está completada
    const isCourseCompleted = (code) => {
        const checkbox = document.getElementById(code);
        return checkbox && checkbox.checked;
    };

    // Función para validar los prerrequisitos de una materia
    const validatePrerequisites = (courseElement) => {
        const prereqType = courseElement.dataset.prereqType;
        const prereqCodes = courseElement.dataset.prereqCodes.split(',').filter(code => code.trim() !== ''); // Limpiar códigos vacíos

        if (prereqType === 'none' || prereqType === 'coreq') {
            // No hay prerrequisitos estrictos que impidan el marcado, o es un correquisito
            return true;
        }

        if (prereqType === 'strict') {
            // Todos los prerrequisitos deben estar completados
            return prereqCodes.every(code => isCourseCompleted(code));
        }

        if (prereqType === 'or') {
            // Al menos uno de los prerrequisitos debe estar completado
            return prereqCodes.some(code => isCourseCompleted(code));
        }

        // Si no se especifica un tipo o es desconocido, permitir por defecto
        return true;
    };

    // Función para actualizar el estado visual de una materia (habilitado/deshabilitado)
    const updateCourseState = (courseElement) => {
        const checkbox = courseElement.querySelector('input[type="checkbox"]');
        
        // Si la materia ya está marcada, no la deshabilitamos por prerrequisitos,
        // pero sí la desmarcamos si un prerrequisito clave se desmarca.
        if (checkbox.checked) {
             const canBeChecked = validatePrerequisites(courseElement);
             if (!canBeChecked) {
                // Si la materia estaba marcada pero sus prerrequisitos ya no se cumplen
                checkbox.checked = false;
                localStorage.setItem(checkbox.id, 'false'); // Actualizar localStorage
                courseElement.classList.add('disabled'); // Deshabilitarla visualmente
                // Podrías añadir una alerta aquí si quieres ser más explícito
             } else {
                courseElement.classList.remove('disabled');
             }
        } else {
            // Si la materia no está marcada, vemos si se puede marcar
            const canBeChecked = validatePrerequisites(courseElement);
            if (canBeChecked) {
                courseElement.classList.remove('disabled');
            } else {
                courseElement.classList.add('disabled');
            }
        }
    };

    // Al cargar la página, cargar el estado guardado y actualizar el estado de todas las materias
    allCheckboxes.forEach(checkbox => {
        const savedState = localStorage.getItem(checkbox.id);
        if (savedState === 'true') {
            checkbox.checked = true;
        }
    });

    // Primera pasada para establecer estados iniciales después de cargar desde localStorage
    // Es importante hacer esto después de cargar todos los estados de los checkboxes.
    allCourses.forEach(courseElement => {
        updateCourseState(courseElement);
    });

    // Añadir event listener a cada checkbox
    allCheckboxes.forEach(checkbox => {
        checkbox.addEventListener('change', (event) => {
            const currentCheckbox = event.target;
            const courseElement = currentCheckbox.closest('.course');

            // Si se intenta marcar la casilla
            if (currentCheckbox.checked) {
                if (!validatePrerequisites(courseElement)) {
                    alert('¡No puedes marcar esta materia! Primero debes completar sus prerrequisitos.');
                    currentCheckbox.checked = false; // Desmarcar si los prerrequisitos no se cumplen
                    localStorage.setItem(currentCheckbox.id, 'false'); // Asegurar que el estado no se guarde
                } else {
                    localStorage.setItem(currentCheckbox.id, 'true'); // Guardar estado
                }
            } else {
                // Si se desmarca la casilla, guardar el estado.
                // No previene la desmarcación para permitir corregir errores,
                // pero las materias dependientes se deshabilitarán si sus prerrequisitos ya no están.
                localStorage.setItem(currentCheckbox.id, 'false');
            }

            // Actualizar el estado visual de todas las materias después de cada cambio
            // Esto es crucial para que las materias dependientes se habiliten/deshabiliten
            allCourses.forEach(c => updateCourseState(c));
        });
    });
});