var lines = input.split('\n');

const firstLine = lines.shift().split(' ');

function comparar(a,b){
    return (a+b+Math.abs(a-b))/2
}

function maior(a,b,c){
    var comparado = comparar(a,b) 
    return comparado > c ? comparado : c
}

var firstInput = parseInt(firstLine.shift());
var secondInput = parseInt(firstLine.shift());
var thirdInput = parseInt(firstLine.shift());

console.log(maior(firstInput,secondInput,thirdInput) + " eh o maior");
