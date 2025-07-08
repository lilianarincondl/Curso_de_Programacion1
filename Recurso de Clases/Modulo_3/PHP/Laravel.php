<?php
/**
 * Guía básica de Laravel con ejemplos comentados
 * ----------------------------------------------
 * Laravel es un framework de PHP para desarrollar aplicaciones web de manera sencilla y estructurada.
 * A continuación se explican sus conceptos básicos con ejemplos.
 */

// 1. Rutas (Routes)
// Las rutas definen cómo responde la aplicación a una solicitud HTTP.
// Ejemplo: Definir una ruta básica en routes/web.php
// Route::get('/saludo', function () {
//     return '¡Hola desde Laravel!';
// });

// 2. Controladores (Controllers)
// Los controladores gestionan la lógica de las solicitudes.
// Ejemplo: Crear un controlador con artisan:
// php artisan make:controller SaludoController
// Y luego en el controlador:
// public function mostrarSaludo() {
//     return '¡Hola desde el controlador!';
// }
// En la ruta:
// Route::get('/saludo', [SaludoController::class, 'mostrarSaludo']);

// 3. Vistas (Views)
// Las vistas muestran la interfaz al usuario, usando Blade (motor de plantillas).
// Ejemplo: resources/views/saludo.blade.php
// <h1>¡Hola, {{ $nombre }}!</h1>
// En el controlador:
// return view('saludo', ['nombre' => 'Daniel']);

// 4. Migraciones y Eloquent (Base de datos)
// Las migraciones permiten crear/modificar tablas con código PHP.
// Ejemplo: Crear migración
// php artisan make:migration create_usuarios_table
// En la migración:
// Schema::create('usuarios', function (Blueprint $table) {
//     $table->id();
//     $table->string('nombre');
//     $table->timestamps();
// });
// Eloquent es el ORM de Laravel para interactuar con la base de datos.
// Ejemplo: Obtener todos los usuarios
// $usuarios = Usuario::all();

// 5. Middlewares
// Los middlewares filtran las solicitudes HTTP (por ejemplo, autenticación).
// Ejemplo: Proteger una ruta con autenticación
// Route::get('/perfil', function () { ... })->middleware('auth');

// 6. Artisan
// Artisan es la herramienta de línea de comandos de Laravel.
// Ejemplo: Crear un modelo
// php artisan make:model Producto

// 7. Validación de formularios
// Laravel facilita la validación de datos recibidos en formularios.
// Ejemplo en un controlador:
// $request->validate([
//     'email' => 'required|email',
//     'password' => 'required|min:8',
// ]);

// 8. Envío de emails
// Laravel permite enviar correos fácilmente.
// Ejemplo:
// Mail::to('destino@correo.com')->send(new Notificacion($datos));

// 9. Rutas con parámetros
// Route::get('/usuario/{id}', function ($id) {
//     return "El ID del usuario es $id";
// });

// 10. Uso de recursos (Resource Controllers)
// Para operaciones CRUD rápidas:
// php artisan make:controller UsuarioController --resource
// Route::resource('usuarios', UsuarioController::class);

// Nota: Para probar estos ejemplos, debes tener un proyecto Laravel creado y configurado.
// Puedes crear uno con: composer create-project laravel/laravel nombre-proyecto

// Recomendación: Consulta la documentación oficial de Laravel para profundizar en cada tema.
// Documentación: https://laravel.com/docs  
?>