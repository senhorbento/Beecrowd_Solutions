var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseInt(lines.shift());
var secondInput = parseInt(lines.shift());
var thirdInput = parseInt(lines.shift());
var fourthInput = parseInt(lines.shift());

var diferenca  = (firstInput*secondInput) - (thirdInput*fourthInput);

console.log("DIFERENCA = " + diferenca);
