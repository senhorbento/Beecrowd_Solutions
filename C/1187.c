#include <stdio.h>

#define _MAX_ 12

int main() {
    int i,j,colunas,colunasdec;
    double matriz [_MAX_][_MAX_],resultado;
    char operacao;

    scanf("%c", &operacao);

    for(i=0;i<_MAX_;i++)
        for(j=0;j<_MAX_;j++)
            scanf("%lf",&matriz[i][j]);

    colunas=11;colunasdec=1;resultado=0;
    for(i=0;i<5;i++){
            for (j=colunasdec;j<colunas;j++)
                resultado=matriz[i][j]+resultado;
            colunas--;
            colunasdec++;
        }

    if(operacao=='M')
        resultado=resultado/30;

    printf("%.1lf\n",resultado);
    return 0;
}
