#include <stdio.h> //Libreria basica
#include <stdlib.h> //Libreria para usar la funcion exit(-1)
#include <ctype.h> //Libreria para usar la funcion stdigit() si es un digito o no

//Variables globales
char posicion [3][3]; //guarda informacion X y 0
int eje_x, eje_y; //se usa para poner posiciones en el array 3 x 3
int ganador = 0;

int Mr_X(){//funcion para leer el teclado e ingresar valor de X, en los ejes x, y

    printf("Escribe la posicion del eje (X) para X: ");
    scanf("%i",&eje_x);

    printf("Escribe la posicion del eje (Y) para X: ");
    scanf("%i",&eje_y);

    return 0;
}

int Mr_0(){//funcion para leer el teclado e ingresar valor de 0, en los ejes x, y

    printf("Escribe la posicion del eje (X) para 0: ");
    scanf("%i",&eje_x);

    printf("Escribe la posicion del eje (Y) para 0: ");
    scanf("%i",&eje_y);

    return 0;
}

int Impresion_tabla_X0(){//funcion para actualizar los cambios en la tabla X 0

    int a, b; //variables definidas para ciclo for

    printf("\n");
        for (a = 0; a < 3; a++){
            for (b = 0; b < 3; b++){
                printf("| %c |",posicion [a][b]);
            }
            printf("\n");
        }

    return 0;
}

int verificar_ganador (){//funcion para verficar si hay un ganador en diferentes lineas

    //verificacion vertical centro para valor X
    if (posicion [0][1] == 'X'){
        if (posicion [1][1] == 'X'){
            if (posicion [2][1] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //verificacion vertical centro para valor 0
    if (posicion [0][1] == '0'){
        if (posicion [1][1] == '0'){
            if (posicion [2][1] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //verificacion diagonal de valor X
    if (posicion [0][0] == 'X'){
        if (posicion [1][1] == 'X'){
            if (posicion [2][2] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //verificacion diagonal de valor 0
    if (posicion [0][0] == '0'){
        if (posicion [1][1] == '0'){
            if (posicion [2][2] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //verificacion diagonal invertida de valor X
    if (posicion [0][2] == 'X'){
        if (posicion [1][1] == 'X'){
            if (posicion [2][0] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //verificacion diagonal invertida de valor 0
    if (posicion [0][2] == '0'){
        if (posicion [1][1] == '0'){
            if (posicion [2][0] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //Verificacion horizontal arriba valor X
    if (posicion [0][0] == 'X'){
        if (posicion [0][1] == 'X'){
            if (posicion [0][2] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }
    //Verificacion horizontal arriba valor 0
    if (posicion [0][0] == '0'){
        if (posicion [0][1] == '0'){
            if (posicion [0][2] == '0'){
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //verificacion horizontal centro de valor X
    if (posicion [1][0] == 'X'){
        if (posicion [1][1] == 'X'){
            if (posicion [1][2] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //verificacion horizontal centro de valor 0
    if (posicion [1][0] == '0'){
        if (posicion [1][1] == '0'){
            if (posicion [1][2] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //Verificacion horizontal abajo de valor X
    if (posicion [2][0] == 'X'){
        if (posicion [2][1] == 'X'){
            if (posicion [2][2] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //Verificacion horizontal abajo de valor 0
    if (posicion [2][0] == '0'){
        if (posicion [2][1] == '0'){
            if (posicion [2][2] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //Verificacion vertical izquierda valor X
    if (posicion [0][0] == 'X'){
        if (posicion [1][0] == 'X'){
            if (posicion [2][0] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //Verificacion vertical izquierda valor 0
    if (posicion [0][0] == '0'){
        if (posicion [1][0] == '0'){
            if (posicion [2][0] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }

    //Vertical derecha de valor X
    if (posicion [0][2] == 'X'){
        if (posicion [1][2] == 'X'){
            if (posicion [2][2] == 'X'){
                ganador = 1;
                printf("\nGanaste X");
                exit(-1);
            }
        }
    }

    //Vertical derecha de valor 0
    if (posicion [0][2] == '0'){
        if (posicion [1][2] == '0'){
            if (posicion [2][2] == '0'){
                ganador = 1;
                printf("\nGanaste 0");
                exit(-1);
            }
        }
    }
    
    return 0;
}


int main (){//funcion para inicializar todo el programa

    int i; //variable definida para el ciclo for

    //impresion de informaciones
    printf("°°° X 0 PARA INGENIEROS °°°\n\n");
    printf("Instrucciones: \n1. Cada jugador debe elegir si usara 0 o X para identificarse. \n2. Se iniciara siempre con X.");
    printf("\n3. El jugador tendra que poner las posiciones de X o 0 en el eje x y eje y. \n4. Numeros para posciones son: 0, 1, 2.\n\n");

    //ciclo for para repetir 4 veces las funciones e intrucciones 
    for (i = 0; i < 5; i++){
        
        //intrucciones para el player X
        fflush(stdin);
        Mr_X();

        //verificar si los numeros ingresados son correctos
        if (eje_x > 2 || eje_x < 0){

            printf("\nEl numero ingresado en el eje (X) no es correcto, por favor intentelo de nuevo.\n\n");
            Mr_X();
        }

        if(eje_y > 2 || eje_y < 0){

            printf("\nEl numero ingresado en el eje (Y) no es correcto, por favor intentelo de nuevo.\n\n");
            Mr_X();

        }

        //verificar espacios disponibles en el arreglo (posicion)
        if (posicion[eje_x][eje_y] != '\0'){

            printf("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor\n\n");
            Mr_X();
                   
            if (posicion[eje_x][eje_y] != '\0'){
                printf("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor\n\n");
                Mr_X();       
    
            }else{
                posicion[eje_x][eje_y] = 'X';
            }

        }else{
            posicion[eje_x][eje_y] = 'X';
        }
        
        Impresion_tabla_X0();

        verificar_ganador();

        //Cuando el ciclo for llega a 4 rompe
        if (i == 4){
            if (ganador != 1){
                printf("\n\nEmpate\n\n");
            }
            break;
        }

        //Instrucciones para el player 0
        Mr_0();

        //verificar si los numeros ingresados son correctos
        if(eje_x > 2 || eje_x < 0){

            printf("\nEl numero ingresado en el eje (X) no es correcto, por favor intentelo de nuevo.\n\n");
            Mr_0();
        }
        if(eje_y > 2 || eje_y < 0){

            printf("\nEl numero ingresado en el eje (Y) no es correcto, por favor intentelo de nuevo.\n\n");
            Mr_0();
        }

        //verificar espacios disponibles en el arreglo (posicion)
        if (posicion[eje_x][eje_y] != '\0'){

            printf("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor\n\n");
            Mr_0();       

            if (posicion[eje_x][eje_y] != '\0'){

                ("\nEsta posicion ya fue seleccionada. Intente con otra posicion, por favor\n\n");
                Mr_0();       
            }else{
                posicion[eje_x][eje_y] = '0';
            }
        }else{
            posicion[eje_x][eje_y] = '0';
        }
        Impresion_tabla_X0();

        verificar_ganador();
    
    }
    
    return 0;
}
