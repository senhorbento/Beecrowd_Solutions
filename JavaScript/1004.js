var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function multiplicar(a,b){
    return a*b
}

var firstInput = parseInt(lines.shift());
var secondInput = parseInt(lines.shift());

console.log("PROD = " + multiplicar(firstInput,secondInput));
