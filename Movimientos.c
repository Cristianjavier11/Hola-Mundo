#include <stdio.h>
void movimientos(char,int,char tab[][3]);
int main()
{
int t,i,x,y;
char p,pl, tab[3][3]={NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
printf("El jugador 1 que digito seria \n");
scanf("%s",&p);
printf("El jugador 2 que digito seria \n");
scanf("%s",&pl);
for(i=0;i<9;i++)
{
    if(i % 2 == 0)
    {
        movimientos(p,1,*tab);
        for(x=0;x<3;x++)
        {
            for(y=0;y<3;y++)
            {
                printf(" %c ",tab[x][y]);
            }
            printf("\n");
        }
    } else
    {
        movimientos(pl,2,*tab);
        for(x=0;x<3;x++)
        {
            for(y=0;y<3;y++)
            {
                printf(" %c ",tab[x][y]);
            }
            printf("\n");
        }
    }
}
}
void movimientos(char y, int m,char d[3][3])
{
    int i=1,x;
do
{
    i=1;
printf("El jugador %d en donde quieres poner tu digito\n", m);
scanf("%i",&x);
printf("El valor de x es %i\n", x);
switch(x)
{
    case 00:
        if(d[0][0]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[0][0] = y;
        }
        break;
    case 01:
        if(d[0][1]!=NULL)
        {
        printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[0][1] = y;
        }
        break;
    case 02:
            if(d[0][2]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[0][2] = y;
        }
        break;
    case 10:
        if(d[1][0]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[1][0] = y;
        }
        break;
    case 11:
        if(d[1][1]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[1][1] = y;
        }
        break;
    case 12:
        if(d[1][2]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[1][2] = y;
        }
        break;
    case 20:
            if(d[2][0]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[2][0] = y;
        }
        break;
    case 21:
        if(d[2][1]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[2][1] = y;
        }
        break;
    case 22:
        if(d[2][2]!=NULL)
        {
            printf("esta posicion ya esta llena\n");
            i=2;
        }
        else{
            d[2][2] = y;
        }
        break;
    default: printf("El valor ingresado no esta adentro del programa");
    i = 2;break;
}
}while(i!=1);
}
