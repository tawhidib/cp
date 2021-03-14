/*
PROBLEM:
1038 - Snack

SUBMISSION:
2/3/18, 1:27:54 PM
*/

#include <stdio.h>
 
int main() {
 
    int X, Y;
    float price;
    scanf("%d %d", &X, &Y);
    if( X == 1)
    {
        price = 4.00;
        printf("Total: R$ %.2f\n", price * Y);
    }
    else if( X == 2)
    {
        price = 4.50;
        printf("Total: R$ %.2f\n", price * Y);
    }
    else if( X == 3)
    {
        price = 5.00;
        printf("Total: R$ %.2f\n", price * Y);
    }
    else if( X == 4)
    {
        price = 2.00;
        printf("Total: R$ %.2f\n", price * Y);
    }
    else
    {
        price = 1.50;
        printf("Total: R$ %.2f\n", price * Y);
    }
 
    return 0;
}