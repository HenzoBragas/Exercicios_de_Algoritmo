#include <stdio.h>


int main(){
    
    int linha, coluna, matriz[3][3] = {{0,0}, {0,0}, {0,0}};
    
    for(linha = 0; linha < 3; linha++){
        for(coluna = 1 ; coluna < 2 ; coluna++){
            printf("%d", matriz[linha][coluna]);
            printf("\n");
        }
    }
    printf("\n");
    for(linha = 0 ; linha < 3 ; linha++){
        for(coluna = 1 ; coluna < 2; coluna++){
            printf("%d", matriz[linha][coluna]);
            printf("\n");
        }
    }
    printf("\n");
    for(linha = 0 ; linha < 3; linha++){
        for(coluna = 1; coluna <2 ; coluna ++){
            printf("%d", matriz[linha][coluna]);
            printf("\n");
        }
    }
    printf("\n");
    for(linha = 0 ; linha < 3; linha++){
        for(coluna = 1; coluna <2 ; coluna ++){
            printf("\n");
            printf("%d", matriz[linha][coluna]);
        }
    }
    return 0 ;
}