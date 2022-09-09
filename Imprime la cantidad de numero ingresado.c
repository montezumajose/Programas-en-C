#include <stdio.h>

int main(){
    int i;
    int number;
    printf("Escribe un number entero: ");
    scanf("%i",&number);
    for (i = 0; i <= number; i++){
        printf("%i\n",i);
    }
    return 0;
}
