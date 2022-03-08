var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const firstLine = lines.shift().split(' ');

var T1 = parseInt(firstLine.shift());
var T2 = parseInt(firstLine.shift());
var T3 = parseInt(firstLine.shift());
var T4 = parseInt(firstLine.shift());

console.log(((T1-1)+(T2-1)+(T3-1)+T4));
