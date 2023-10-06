//Ariadna Origel. Equipo: Hola Mundo - Mostrar tablero//
#include<stdio.h>

void imptab(char tabla[][3]);

int main()
{
    char tabla[3][3]={'x','o',NULL,'o','x','o',NULL,NULL,NULL};
    imptab(*tabla);

}

void imptab(char tabla[3][3])
{
    printf("%c|%c|%c\n",tabla[0][0],tabla[0][1],tabla[0][2]);
    printf("-----\n");
    printf("%c|%c|%c\n",tabla[1][0],tabla[1][1],tabla[1][2]);
    printf("-----\n");
    printf("%c|%c|%c\n",tabla[2][0],tabla[2][1],tabla[2][2]);
}
