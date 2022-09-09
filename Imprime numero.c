#include <stdio.h>
int main(){
    int i;
    int number;
    char YesOno;
    while (YesOno != 'n')
	{
		printf("Escribe un number entero: ");
    	scanf("%i",&number);   
		for (i = 0; i < number; i++){
        	printf("%i\n",i);
		}
	printf("Quieres seguir?: ");
	scanf("%s",&YesOno);
    }
    return 0;
}

