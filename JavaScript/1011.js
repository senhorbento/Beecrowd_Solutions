var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseInt(lines.shift());

const pi = 3.14159;
const volume = ((4/3)*pi*(firstInput*firstInput*firstInput)).toFixed(3);

console.log("VOLUME = " + volume);
