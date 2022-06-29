var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseInt(lines.shift());
var secondInput = parseInt(lines.shift());

var resultado = firstInput * secondInput / 12;

console.log(resultado.toFixed(3));