var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function triangulo(a,c){
    return (a * c) /2
}

function circulo(c){
    const pi = 3.14159;
    return pi * (c*c)
}

function trapezio(a,b,c){
    return (a + b) * c / 2.0
}

function retangulo(a,b){
    return a*b
}

const firstLine = lines.shift().split(' ');

var firstInput = parseFloat(firstLine.shift());
var secondInput = parseFloat(firstLine.shift());
var thirdInput = parseFloat(firstLine.shift());

console.log("TRIANGULO: " + triangulo(firstInput,thirdInput).toFixed(3));
console.log("CIRCULO: " + circulo(thirdInput).toFixed(3));
console.log("TRAPEZIO: " + trapezio(firstInput,secondInput,thirdInput).toFixed(3));
console.log("QUADRADO: " + retangulo(secondInput,secondInput).toFixed(3));
console.log("RETANGULO: " + retangulo(firstInput,secondInput).toFixed(3));
