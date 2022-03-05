var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const firstLine = lines.shift().split(' ');

function comparar(a,b){
    return (a+b+Math.abs(a-b))/2
}

var firstInput = parseInt(firstLine.shift());
var secondInput = parseInt(firstLine.shift());
var thirdInput = parseInt(firstLine.shift());

var comparado = comparar(firstInput,secondInput);

if(comparado > thirdInput)
    console.log(comparado + " eh o maior");
else    
    console.log(thirdInput + " eh o maior");
