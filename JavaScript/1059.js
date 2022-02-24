var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

for(let i = 2; i < 101; i+=2)
    console.log(i);
