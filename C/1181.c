#include <stdio.h>

int main() {
    int i,j,colunas,colunasdec, pos;
    double matriz [12][12],resultado;
    char operacao;
    scanf("%d %c", &pos, &operacao);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&matriz[i][j]);
    resultado=0;
    for(i=0;i<12;i++)
        resultado += matriz[pos][i];
    if(operacao=='M')
        resultado=resultado/12;
    printf("%.1lf\n",resultado);
    return 0;
}