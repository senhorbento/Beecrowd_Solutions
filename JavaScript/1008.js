var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseInt(lines.shift());
var secondInput = parseInt(lines.shift());
var thirdInput = parseFloat(lines.shift());

var salary  = secondInput*thirdInput;
salary = salary.toFixed(2);

console.log("NUMBER = " + firstInput);
console.log("SALARY = U$ " + salary);
