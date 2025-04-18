#include <stdio.h>


void movtorre(int casastorre){
    if (casastorre > 0){
        printf("Torre: Direita \n");
        movtorre(casastorre -1);
    }
}


int main() { 


    movtorre(5);
    printf("\n");

    char c[20] = "Bispo: Cima", d[20] = "direita";

    for (int movbc = 0; movbc < 5; movbc++)
    {
        for (int movbd = 0; movbd < 1; movbd++)
        {
        d;    
        }
        printf("%s %s \n", c, d);
    }

    return 0;
}
