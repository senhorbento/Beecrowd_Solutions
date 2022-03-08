var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var entrada = parseFloat(lines.shift());

console.log(((2*3.14)*entrada).toFixed(2));