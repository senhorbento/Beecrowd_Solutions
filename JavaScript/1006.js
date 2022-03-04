var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var firstInput = parseFloat(lines.shift());
var secondInput = parseFloat(lines.shift());
var thirdInput = parseFloat(lines.shift());

var media = ((firstInput*2) + (secondInput*3) + (thirdInput*5))/10;
media = media.toFixed(1);

console.log("MEDIA = " + media);
