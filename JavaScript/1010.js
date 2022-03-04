var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const firstItem = lines.shift().split(' ');
const secondItem = lines.shift().split(' ');

var idFirstItem = parseInt(firstItem.shift());
var qtdFirstItem = parseInt(firstItem.shift());
var valueFirstItem = parseFloat(firstItem.shift());

var idSecondItem = parseInt(secondItem.shift());
var qtdSecondItem = parseInt(secondItem.shift());
var valueSecondItem = parseFloat(secondItem.shift());

const total = ((qtdFirstItem*valueFirstItem) + (qtdSecondItem*valueSecondItem)).toFixed(2);

console.log("VALOR A PAGAR: R$ " + total);
