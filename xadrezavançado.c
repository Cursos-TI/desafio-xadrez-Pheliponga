#include <stdio.h>


void movtorre(int casastorre){
    if (casastorre > 0){
        printf("Torre: Direita \n");
        movtorre(casastorre -1);
    }
}

void movbispo(int casasbispo){
    if (casasbispo > 0){
        movbispo(casasbispo -1);
    }
}

void movrainha(int casasrainha){
    if (casasrainha < 8){
        printf("Rainha: Esquerda \n");
        movrainha(casasrainha +1);
    }
}

int main() { 
    
    int cimabispo;

    movtorre(5);

    while (cimabispo)
    {
        for(int movb = 0; movb < 5; movb++){
            printf("direita \n");
        }
        printf("Bispo: Cima ");
        cimabispo++;
    }
    
    movrainha(0);

    return 0;
}
