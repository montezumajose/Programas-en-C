#include <stdio.h>

int main (){

    int array [6], i, x;

    for (i = 0; i <= 6-1; i++){
        printf("Escribe un numero: ");
        scanf("%i",&array[i]);
    }

    for (x = 5; x >= 0; x--){
        printf("%i ",array[x]);
    }

    return 0;
}