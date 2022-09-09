#include <stdio.h>

int main (){

    float array_notas [5]; 
    int i;
    float resultado;
    

    printf("Ingrese 5 notas\n\n");

    for (i = 0; i <= 4; i++){

        printf("Ingrese nota %i: ",i+1);
        scanf("%f",&array_notas[i]);

        if (array_notas[i] < 0 || array_notas[i] > 100){
            printf("\nError, solo se puede ingresar notas del 0 al 100");
            break;
        }else{
          resultado = resultado + array_notas[i];  
        }

    }
    
    resultado = resultado/5;

    if (resultado >= 71){
        printf("\nAprobaste con %.2f",resultado);
    }else{
        printf("\nReprobaste con %.2f",resultado);
    }

    return 0;
}
