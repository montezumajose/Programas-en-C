#include <stdio.h>

int buscador_de_vocales(char oracion[40]){
	
    int i = 0;
    int resultado = 0;

    for (i; i <= 40; i++){

        if (oracion[i] == 97){
            resultado += 1;
        }else if(oracion[i] == 101){
            resultado +=1;
        }else if(oracion[i] == 105){
            resultado +=1;
        }else if (oracion[i] == 111){
            resultado +=1;
        }else if (oracion[i] == 117){
            resultado+=1;
        }
    }

    printf("\nHay %i vocales en la oracion",resultado);

    return 0;
}

int main(){
	
    char oracion [40];

	printf("Escribe una oracion: ");
	fgets(oracion,40,stdin);

	buscador_de_vocales(oracion);
	
	return 0;
}
