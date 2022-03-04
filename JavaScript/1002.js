var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var entrada= parseFloat(lines.shift());

const pi = 3.14159;

entrada = pi * (entrada*entrada);

const area = entrada.toFixed(4);

console.log("A=" + area);
