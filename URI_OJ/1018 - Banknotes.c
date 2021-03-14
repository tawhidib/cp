#include <stdio.h>

int main(){
    int N, t100, t50, t20, t10, t5, t2, t1;
    scanf("%d", &N);
    if(N > 0 && N < 1000000){
        t100 = ( N / 100);
        t50 = ((N - ( t100 * 100))/50);
        t20 = ((N - ( t100 * 100) - (t50 * 50))/20);
        t10 = ((N - ( t100 * 100) - (t50 * 50) - (t20 * 20))/10);
        t5 = ((N - ( t100 * 100) - (t50 * 50) - (t20 * 20) - (t10 *10))/5);
        t2 = ((N - ( t100 * 100) - (t50 * 50) - (t20 * 20) - (t10 *10) - (t5 * 5))/2);
        t1 = (N - ( t100 * 100) - (t50 * 50) - (t20 * 20) - (t10 *10) - (t5 * 5) - (t2 * 2));
        printf("%d\n", N);
        printf("%d nota(s) de R$ 100,00\n", t100);
        printf("%d nota(s) de R$ 50,00\n", t50);
        printf("%d nota(s) de R$ 20,00\n", t20);
        printf("%d nota(s) de R$ 10,00\n", t10);
        printf("%d nota(s) de R$ 5,00\n", t5);
        printf("%d nota(s) de R$ 2,00\n", t2);
        printf("%d nota(s) de R$ 1,00\n", t1);
    }
    return 0;
}
