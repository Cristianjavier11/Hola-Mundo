#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

//Funcion para inicializar el tablero con espacios en blanco.
void inicializarTablero(char tablero[FILAS][COLUMNAS]);

int main(){
   char tablero[FILAS][COLUMNAS];

   inicializarTablero(tablero);
   printf("\tBIENVENIDO AL JUEGO DEL GATO!\n");

    return 0;
}

void inicializarTablero(char tablero[FILAS][COLUMNAS]){
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = ' ';
        }
    }
}
