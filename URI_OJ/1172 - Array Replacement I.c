#include <stdio.h>

int main(){
    int index = 10, indexNumber;
    int N[index];
    for(indexNumber = 0; indexNumber < index; indexNumber++){
        scanf("%d ", &N[indexNumber]);
    }
    for(indexNumber = 0; indexNumber < index; indexNumber++){
        if(N[indexNumber] <= 0){
            N[indexNumber] = 1;
            printf("X[%d] = %d\n", indexNumber, N[indexNumber]);
        }
        else{
            printf("X[%d] = %d\n", indexNumber, N[indexNumber]);
        }
    }
    return 0;
}
