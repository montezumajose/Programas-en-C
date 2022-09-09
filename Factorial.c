#include <stdio.h>

int main (){
	int number1;
	int resultado = 1;
	int i;
	
	printf("Escribe un numero: ");
	scanf("%i",&number1);
	
	for (i=1; i <= number1; i++){
		resultado = resultado * i;
	}
	printf("El resultado es %i",resultado);
	
	return resultado;
}

