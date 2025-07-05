const nombreProducto = "Tablet 10 pulgadas";
let precio = 450.99;
let stock = 25;
const enviosgratis = true;

let cantidadcomprada = 2;

let subtotal = precio * cantidadcomprada;
let impuesto = subtotal * 0.07;
let totalfinal = subtotal + impuesto;

console.log(`Nombre del producto: ${nombreProducto}`);
console.log(`El Precio del producto es: $${precio}`);
console.log(`Cantidad en stock: ${stock}`);
console.log(`¿Tiene envio gratis?: ${enviosgratis}`);
console.log(`Subtotal por ${subtotal}`);
console.log(`Precio final: ${totalfinal}`);