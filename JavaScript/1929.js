var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const firstLine = lines.shift().split(' ');

function ehTriangulo (a,b,c){
    return (Math.abs(b-c) < a && a < b+c) | (Math.abs(a-c) < b && b < a+c) | (Math.abs(a-b) < c && c < a+b) ? 1 : 0
}

var firstInput = parseInt(firstLine.shift());
var secondInput = parseInt(firstLine.shift());
var thirdInput = parseInt(firstLine.shift());
var fourthInput = parseInt(firstLine.shift());

if(ehTriangulo(firstInput,secondInput,thirdInput))
    console.log('S');
else if(ehTriangulo(firstInput,secondInput,fourthInput))
    console.log('S');
else if(ehTriangulo(firstInput,fourthInput,thirdInput))
    console.log('S');
else if(ehTriangulo(fourthInput,secondInput,thirdInput))
    console.log('S');
else
    console.log('N');
