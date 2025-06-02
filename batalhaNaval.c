#include <stdio.h>

int main(){
    int matriz[10][10];  

    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = 0; //icicializa todos os elementos da matriz com 0.
            if(i == 0 && j >= 2 && j <= 4) {//Posiciona um navio na vertical linha 0, coluna 2-3-4.
                matriz[i][j] = 3;
            } else if (i == 1 && j == 0 || i == 2 && j == 1 || i == 3 && j == 2){//Poicionau um navio na diagonal linha 1, coluna 0-1-2.
                matriz[i][j] = 3;
            }else if( i == 5 && j == 0 || i == 6 && j == 1 || i == 7 && j == 2) {//Poicionau um navio na diagonal linha 5, coluna 0-1-2.
                matriz[i][j] = 3;
            }else if( i >= 2 && i <= 4 && j == 9) {// Posiciona um navio na vertical linha 2-3-4, coluna 9.
                matriz[i][j] = 3;
            }
            printf("%d", matriz[i][j]);
            if( j < 9) {// Verifica se não e o último elemento da linha e imprime um espaço.
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}