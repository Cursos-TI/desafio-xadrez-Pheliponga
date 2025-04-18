#include <stdio.h>


void movtorre(int casastorre)
{
    if (casastorre > 0){
        printf("Torre: Direita \n");
        movtorre(casastorre -1);
    }
}
/*Recursividade para o movimento da torre*/

char c[20] = "Bispo: Cima", d[20] = "direita";

void movbispo(int casabispo)
{
    if (casabispo > 0)
    {
    for (int movbc = 0; movbc < 5; movbc++)
    {
        for (int movbd = 0; movbd < 1; movbd++)
        {
            d;
        }
        printf("%s %s \n", c, d);
    }
        movbispo(casabispo -1);
    }
}
/*Recursividade para o movimento do bispo utilizando loops aninhados*/

void movrainha(int casarainha)
{
    if (casarainha < 8)
    {
    for(int movr = 0; movr < 1; movr++)
    {
        printf("Rainha: Esquerda \n");
    }
    movrainha(casarainha +1);
    }
}

int main() { 


    movtorre(5);
    printf("\n");
 /*Definição de quantas vezes a recursividade executará*/   

    movbispo(1);
    printf("\n");
 /*Definição de quantas vezes a recursividade executará*/   
   

    movrainha(0);

    return 0;
}
