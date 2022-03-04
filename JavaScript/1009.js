var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = lines.shift();
var secondInput = parseFloat(lines.shift());
var thirdInput = parseFloat(lines.shift());

var total  = secondInput+(thirdInput*0.15);
total = total.toFixed(2);

console.log("TOTAL = R$ " + total);
