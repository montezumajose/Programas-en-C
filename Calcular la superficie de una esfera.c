#include <stdio.h>
#include <math.h>

int main()
{
    float radio;
    float superficie;
    float volumen;
    
    printf("Escribe el radio de la esfera: ");
    scanf("%f",&radio);
    
    superficie = 4*3.141593*pow (radio, 2);
    volumen = 4/3*3.141593*pow (radio, 3);    
    
    printf("La superficie de la esfera es de %.2f",superficie);
    printf("\nEl volumen de la esfera es de %.2f",volumen);
    
    return 0;
}
