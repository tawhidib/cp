/*
PROBLEM:
1020 - Age in Days

SUBMISSION:
2/5/18, 1:57:22 PM
*/

#include <stdio.h>

int main(){
    int x, ano, mes, dia;
    scanf("%d", &x);
    ano = (x / 365);
    mes = ((x - (ano*365))/30);
    dia = (x - (ano*365) - (mes*30));
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}
