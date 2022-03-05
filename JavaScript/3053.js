var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function posNumerica(letra){
    if(letra[0] === 'A')
        return 0
    else if(letra[0] == 'B')
        return 1
    else if(letra[0] == 'C')
        return 2

}

function posFinal(copos){
    for(var i = 0 ; i < 3 ; i++)
        if(copos[i] === 'M')  
            if(i === 0)
                return 'A'
            else if (i === 1)
                return 'B'
            else if (i === 2)
                return 'C'
}

var qtdMovimentos = parseInt(lines.shift());
var posLiteral = lines.shift();

var copos = ['A','B','C'];
copos[posNumerica(posLiteral)] = "M";

var aux;
for(var i = 0 ; i < qtdMovimentos ; i++){
    var movimento = parseInt(lines.shift());
    switch(movimento){
    case 1:
        aux = copos[0];
        copos[0]=copos[1];
        copos[1]=aux;
        break;
    case 2:
        aux = copos[1];
        copos[1]=copos[2];
        copos[2]=aux;
        break;

    case 3: 
        aux = copos[0];
        copos[0]=copos[2];
        copos[2]=aux;
        break;

    default: 
        break;
    }
}
console.log(posFinal(copos));
