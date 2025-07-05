document.addEventListener('DOMContentLoaded', () => {
    const operationDisplay = document.getElementById('operation-display');
    const resultDisplay = document.getElementById('result-display');
    const buttons = document.querySelectorAll('.btn');

    let currentInput = ''; // Almacena lo que el usuario está tecleando
    let storedValue = null; // Almacena el primer operando para cálculos
    let currentOperator = null; // Almacena el operador pendiente
    let expectingNewInput = false; // Indica si el siguiente número debe ser un nuevo inicio

    // Función para actualizar la pantalla
    function updateDisplay() {
        operationDisplay.textContent = currentInput || '0';
        // resultDisplay.textContent es para el resultado final o cuando se realiza una operación científica inmediata.
        // Por ahora, lo mantenemos simple para mostrar el input. El resultado final se muestra solo al presionar '='.
    }

    // Función para limpiar todo
    function clearAll() {
        currentInput = '';
        storedValue = null;
        currentOperator = null;
        expectingNewInput = false;
        resultDisplay.textContent = '0'; // Resetear el display de resultado
        updateDisplay();
    }

    // Función para borrar el último caracter
    function deleteLastChar() {
        if (expectingNewInput && storedValue !== null) { // Si hay un resultado previo y estamos esperando nuevo input, limpiar todo
            clearAll();
            return;
        }
        if (currentInput.length > 0) {
            currentInput = currentInput.slice(0, -1);
        }
        if (currentInput === '') { // Si borramos todo, resetear
            resultDisplay.textContent = '0';
        }
        updateDisplay();
    }

    // Función para manejar la entrada de números y punto decimal
    function inputNumber(num) {
        if (expectingNewInput) {
            currentInput = num === '.' ? '0.' : num; // Si el primer input es '.', lo convierte a '0.'
            expectingNewInput = false;
        } else {
            if (num === '.' && currentInput.includes('.')) return; // Evitar múltiples puntos decimales
            if (currentInput === '0' && num !== '.') { // Evitar '01', '02', etc.
                currentInput = num;
            } else {
                currentInput += num;
            }
        }
        updateDisplay();
    }

    // Función para realizar la operación matemática
    function performOperation(value1, value2, operator) {
        value1 = parseFloat(value1);
        value2 = parseFloat(value2);

        if (isNaN(value1) || isNaN(value2)) return 'Error';

        switch (operator) {
            case '+':
                return value1 + value2;
            case '-':
                return value1 - value2;
            case '*':
                return value1 * value2;
            case '/':
                if (value2 === 0) return 'Error: Div by 0';
                return value1 / value2;
            case '^': // Potencia
                return Math.pow(value1, value2);
            case '%': // Módulo
                return value1 % value2;
            default:
                return 'Error';
        }
    }

    // Función para manejar operadores (aritméticos)
    function handleOperator(nextOperator) {
        const inputValue = parseFloat(currentInput);

        if (inputValue === '' && storedValue === null) return; // No hay nada que operar

        if (storedValue === null && currentInput !== '') {
            storedValue = inputValue;
        } else if (currentOperator) {
            // Realizar el cálculo si ya hay un operador y un valor almacenado
            const calculatedResult = performOperation(storedValue, inputValue, currentOperator);
            if (String(calculatedResult).includes('Error')) {
                resultDisplay.textContent = calculatedResult;
                clearAll(); // Limpiar después de un error
                return;
            }
            storedValue = calculatedResult;
            resultDisplay.textContent = formatResult(calculatedResult); // Mostrar resultado parcial
        }

        currentOperator = nextOperator;
        currentInput = ''; // Limpiar input para el siguiente operando
        expectingNewInput = true; // El siguiente número será un nuevo input
        operationDisplay.textContent = formatResult(storedValue) + ' ' + nextOperator; // Mostrar la operación pendiente
    }

    // Función para manejar operaciones científicas
    function handleScientificOperator(operator) {
        let value = parseFloat(currentInput);

        if (isNaN(value)) {
            if (storedValue !== null) {
                value = storedValue; // Si no hay input actual, usa el valor almacenado
            } else {
                resultDisplay.textContent = 'Error';
                clearAll();
                return;
            }
        }

        let result = 'Error';
        try {
            switch (operator) {
                case 'cos':
                    result = Math.cos(value * Math.PI / 180); // Convertir grados a radianes
                    break;
                case 'tan':
                    result = Math.tan(value * Math.PI / 180); // Convertir grados a radianes
                    break;
                case 'sqrt':
                    if (value < 0) {
                        result = 'Error: Neg SQRT';
                    } else {
                        result = Math.sqrt(value);
                    }
                    break;
                default:
                    result = 'Error';
            }
        } catch (e) {
            result = 'Error';
        }

        if (String(result).includes('Error')) {
            resultDisplay.textContent = result;
            clearAll();
        } else {
            currentInput = formatResult(result); // El resultado científico es el nuevo input
            storedValue = null; // Reiniciar storedValue para no interferir
            currentOperator = null; // Reiniciar operador
            expectingNewInput = true; // El siguiente número debe ser un nuevo inicio
            resultDisplay.textContent = currentInput;
            operationDisplay.textContent = operator + '(' + formatResult(value) + ') ='; // Muestra la operación científica
        }
        updateDisplay();
    }

    // Función para formatear el resultado (evitar demasiados decimales)
    function formatResult(num) {
        if (typeof num !== 'number' && typeof num !== 'string') return ''; // Asegurarse que es un número
        num = parseFloat(num);
        if (isNaN(num)) return 'Error';

        // Reducir decimales para números muy largos o con muchas cifras decimales
        if (num.toString().length > 10) {
            return parseFloat(num.toFixed(8)).toString(); // Limitar a 8 decimales si es necesario
        }
        return num.toString();
    }

    // Función para calcular el resultado final
    function calculateResult() {
        if (currentInput === '' && storedValue === null) return; // No hay nada que calcular
        if (currentInput === '' && storedValue !== null && currentOperator === null) {
            // Si solo hay un storedValue y no hay operador pendiente, mostrarlo como resultado
            resultDisplay.textContent = formatResult(storedValue);
            operationDisplay.textContent = formatResult(storedValue) + ' =';
            currentInput = formatResult(storedValue); // Para poder seguir operando con el resultado
            expectingNewInput = true;
            return;
        }

        let finalValue = parseFloat(currentInput);
        if (currentOperator && storedValue !== null) {
            const calculated = performOperation(storedValue, finalValue, currentOperator);
            if (String(calculated).includes('Error')) {
                resultDisplay.textContent = calculated;
                clearAll();
                return;
            }
            finalValue = calculated;
        } else if (currentInput !== '') {
            // Si no hay operador pero hay input, solo mostrar el input como resultado
            finalValue = parseFloat(currentInput);
        } else {
            // Caso donde no hay input ni storedValue relevante
            return;
        }

        resultDisplay.textContent = formatResult(finalValue);
        // Construir la cadena de operación para mostrarla
        let fullOperation = '';
        if (storedValue !== null && currentOperator !== null) {
            fullOperation = formatResult(storedValue) + ' ' + currentOperator + ' ' + currentInput + ' =';
        } else {
            fullOperation = currentInput + ' =';
        }
        operationDisplay.textContent = fullOperation;

        currentInput = formatResult(finalValue); // El resultado es el nuevo input para futuras operaciones
        storedValue = null; // Reiniciar el valor almacenado
        currentOperator = null; // Reiniciar el operador
        expectingNewInput = true; // El siguiente número debe iniciar una nueva operación
    }

    // Event Listeners para los botones
    buttons.forEach(button => {
        button.addEventListener('click', () => {
            const buttonText = button.textContent;
            const action = button.dataset.action;
            const operator = button.dataset.operator;

            if (action === 'clear') {
                clearAll();
            } else if (action === 'delete') {
                deleteLastChar();
            } else if (action === 'calculate') {
                calculateResult();
            } else if (button.classList.contains('number') || buttonText === '.') {
                inputNumber(buttonText);
            } else if (button.classList.contains('operator')) {
                handleOperator(operator);
            } else if (button.classList.contains('scientific')) {
                handleScientificOperator(operator);
            }
        });
    });

    // Inicializar pantalla
    clearAll(); // Asegurarse de que todo esté limpio al cargar
});