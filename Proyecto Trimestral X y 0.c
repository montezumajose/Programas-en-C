#include <stdio.h>

int main(){

    char posicion [3][3];
    int eje_x, eje_y;
    int i, a, b;

    printf("Juego de X y 0\n");

    for (i = 0; i < 5; i++){
        //ciclo for para imprimir tabla del gato, para actualizar valor
        printf("\n");
        
        fflush(stdin);
        //usuario agregando valores del eje X,Y
        printf("Escribe la posicion (x) de X: ");
        scanf("%i",&eje_x);

        printf("Escribe la posicion (y) de X: ");
        scanf("%i",&eje_y);

        //verificar espacios disponibles en el arreglo (posicion)
        if (posicion[eje_x][eje_y] != '\0'){

            printf("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor");
            break;       

        }else{
            posicion[eje_x][eje_y] = 'X';
        }
        
        //actualizacion de la tabla del X 0
        for (a = 0; a < 3; a++){
            for (b = 0; b < 3; b++){
                fflush(stdin);
                printf("| %c |",posicion [a][b]);
            }
            printf("\n");
        }
        //verificacion vertical centro para valor X
        if (posicion [0][1] == 'X'){
            if (posicion [1][1] == 'X'){
                if (posicion [2][1] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //verificacion vertical centro para valor 0
        if (posicion [0][1] == '0'){
            if (posicion [1][1] == '0'){
                if (posicion [2][1] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //verificacion diagonal de valor X
        if (posicion [0][0] == 'X'){
            if (posicion [1][1] == 'X'){
                if (posicion [2][2] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //verificacion diagonal de valor 0
        if (posicion [0][0] == '0'){
            if (posicion [1][1] == '0'){
                if (posicion [2][2] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //verificacion diagonal invertida de valor X
        if (posicion [0][2] == 'X'){
            if (posicion [1][1] == 'X'){
                if (posicion [2][0] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //verificacion diagonal invertida de valor 0
        if (posicion [0][2] == '0'){
            if (posicion [1][1] == '0'){
                if (posicion [2][0] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //Verificacion horizontal arriba valor X
        if (posicion [0][0] == 'X'){
            if (posicion [0][1] == 'X'){
                if (posicion [0][2] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }
        //Verificacion horizontal arriba valor 0
        if (posicion [0][0] == '0'){
            if (posicion [0][1] == '0'){
                if (posicion [0][2] == '0'){
                    printf("\nGanaste 0S");
                    break;
                }
            }
        }

        //verificacion horizontal centro de valor X
        if (posicion [1][0] == 'X'){
            if (posicion [1][1] == 'X'){
                if (posicion [1][2] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //verificacion horizontal centro de valor 0
        if (posicion [1][0] == '0'){
            if (posicion [1][1] == '0'){
                if (posicion [1][2] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //Verificacion horizontal abajo de valor X
        if (posicion [2][0] == 'X'){
            if (posicion [2][1] == 'X'){
                if (posicion [2][2] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //Verificacion horizontal abajo de valor 0
        if (posicion [2][0] == '0'){
            if (posicion [2][1] == '0'){
                if (posicion [2][2] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //Verificacion vertical izquierda valor X
        if (posicion [0][0] == 'X'){
            if (posicion [1][0] == 'X'){
                if (posicion [2][0] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //Verificacion vertical izquierda valor 0
        if (posicion [0][0] == '0'){
            if (posicion [1][0] == '0'){
                if (posicion [2][0] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //Vertical derecha de valor X
        if (posicion [0][2] == 'X'){
            if (posicion [1][2] == 'X'){
                if (posicion [2][2] == 'X'){
                    printf("\nGanaste X");
                    break;
                }
            }
        }

        //Vertical derecha de valor 0
        if (posicion [0][2] == '0'){
            if (posicion [1][2] == '0'){
                if (posicion [2][2] == '0'){
                    printf("\nGanaste 0");
                    break;
                }
            }
        }

        //Cuando el ciclo for llega a 4 rompe
        if (i == 4){
            break;
        }

        printf("Escribe la posicion (x) de 0: ");
        scanf("%i",&eje_x);

        printf("Escribe la posicion (y) de 0: ");
        scanf("%i",&eje_y);

        if (posicion[eje_x][eje_y] != '\0'){

            printf("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor");
            break;       

        }else{
            posicion[eje_x][eje_y] = '0';
        }
        
        //actualizacion de la tabla del X 0
        printf("\n");
        for (a = 0; a < 3; a++){
            for (b = 0; b < 3; b++){
                printf("| %c |",posicion [a][b]);
            }
            printf("\n");
        }
    }

    return 0; 
}

