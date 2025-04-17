#include <stdio.h>


void movtorre(int casastorre){
    if (casastorre > 0){
        printf("Torre: Direita \n");
        movtorre(casastorre -1);
    }
}


int main() { 

    int movbd = 5;

    movtorre(5);
    
    printf("\n");

    for (int movbc = 0; movbc < 5; movbc++)
    {
        while (movbd)
        {
            printf("Bispo: Direita \n");
            movbd--;
        }
        printf("Cima ");
    }

    return 0;
}
