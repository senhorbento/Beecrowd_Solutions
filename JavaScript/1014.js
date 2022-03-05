var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseInt(lines.shift());
var secondInput = parseFloat(lines.shift());

console.log((firstInput/secondInput).toFixed(3) + " km/l");
