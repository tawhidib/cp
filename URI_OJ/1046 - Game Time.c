#include <stdio.h>

int main(){
    int initialHour, finalHour, gameHour;
    scanf("%d %d", &initialHour, &finalHour);
    if(initialHour > finalHour){
        gameHour = ((finalHour + 24) - initialHour);
        printf("O JOGO DUROU %d HORA(S)\n", gameHour);
    }
    else if(initialHour < finalHour){
        gameHour = (finalHour - initialHour);
        printf("O JOGO DUROU %d HORA(S)\n", gameHour);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
