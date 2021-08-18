#include <stdio.h>

#define _MAX_ 12

int main() {
    int i,j,linhas,linhasdec;
    double matriz [_MAX_][_MAX_],resultado;
    char operacao;

    scanf("%c", &operacao);

    for(i=0;i<_MAX_;i++)
        for(j=0;j<_MAX_;j++)
            scanf("%lf",&matriz[i][j]);

    linhas=_MAX_-1;linhasdec=1;resultado=0;
    for(j=_MAX_-1;j>6;j--){
        for(i=linhasdec;i<linhas;i++)
            resultado = resultado + matriz[i][j];
        linhas--;linhasdec++;
    }

    if(operacao=='M')
        resultado=resultado/30;

    printf("%.1lf\n",resultado);
    return 0;
}
