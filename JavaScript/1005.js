var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseFloat(lines.shift());
var secondInput = parseFloat(lines.shift());

var media = ((firstInput*3.5) + (secondInput*7.5))/11;
media = media.toFixed(5);

console.log("MEDIA = " + media);
