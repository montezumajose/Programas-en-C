#include <stdio.h>

int fibonacci (int n){

    int array [100] = {1,1};
    int contador1 = 0;
    int contador2 = 1;
    int contador3 = 2;
    int i;

    for (i = 0; i <= n-1; i++){
        array [contador3] = array[contador1] + array[contador2];
        contador1 += 1;
        contador2 += 1;
        contador3 += 1;
        printf("%i, ",array[i]);
    }
    return 0;
}

int main(){

    int n;

    printf("Escribe un numero: ");
    scanf("%i",&n);
    
    fibonacci(n);
    
    return 0;
}
