#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define LINHA_HABILIDADE 3
#define COLUNA_HABILIDADE 5
#define NAVIO 3

int main(){
    int matriz[10][10];

    for(int i = 0; i < LINHA_HABILIDADE; i++){//habilidade cone
        for(int j = 0; j < COLUNA_HABILIDADE; j++) {
            matriz[i][j] = 0;
            if(i == 0 && j == 2){
                matriz[i][j] = 1;
            }else if(i == 1 && j >= 1 && j <= 3){
                matriz[i][j] = 1;
            }else if (i == 2 && j >= 0 && j <= 4){
                matriz[i][j] = 1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < LINHA_HABILIDADE; i++){//habilidade cruz.
        for(int j = 0; j < COLUNA_HABILIDADE; j++) {
            matriz[i][j] = 0;
            if(i == 0 && j == 2){
                matriz[i][j] = 1;
            }else if(i == 1 && j >= 0 && j <= 4){
                matriz[i][j] = 1;
            }else if (i == 2 && j == 2){
                matriz[i][j] = 1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i = 0; i < LINHA_HABILIDADE; i++){//habilidade octaedro.
        for(int j = 0; j < COLUNA_HABILIDADE; j++) {
            matriz[i][j] = 0;
            if(i == 0 && j == 2){
                matriz[i][j] = 1;
            }else if(i == 1 && j >= 1 && j <= 3){
                matriz[i][j] = 1;
            }else if (i == 2 && j == 2){
                matriz[i][j] = 1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    //Matriz 10x10 com navios e habilidades.
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = 0; //icializa todos os elementos da matriz com 0.
            if(i == 0 && j >= 2 && j <= 4) {//Posiciona um navio na vertical linha 0, coluna 2-3-4.
                matriz[i][j] = NAVIO;
            } else if (i == 1 && j == 0 || i == 2 && j == 1 || i == 3 && j == 2){//Poicionau um navio na diagonal linha 1, coluna 0-1-2.
                matriz[i][j] = NAVIO;
            }else if( i == 5 && j == 0 || i == 6 && j == 1 || i == 7 && j == 2) {//Poicionau um navio na diagonal linha 5, coluna 0-1-2.
                matriz[i][j] = NAVIO;
            }else if( i >= 2 && i <= 4 && j == 9) {// Posiciona um navio na vertical linha 2-3-4, coluna 9.
                matriz[i][j] = NAVIO;
            }

            //habilidade cone.
            if(i == 0 && j == 6){
                matriz[i][j] = 5;
            }else if(i == 1 && j >= 5 && j <= 7){
                matriz[i][j] = 5;
            }else if (i == 2 && j >= 4 && j <= 8){
                matriz[i][j] = 5;
            }

            //Habilidade cruz.
            if(i == 3 && j == 3){
                matriz[i][j] = 5;
            }else if(i == 4 && j >= 2 && j <= 4){
                matriz[i][j] = 5;
            }else if (i == 5 && j == 3){
                matriz[i][j] = 5;
            }

            //Habilidade octaedro.
            if(i == 7 && j == 5){
                matriz[i][j] = 5;
            }else if(i == 8 && j >= 4 && j <= 6){
                matriz[i][j] = 5;
            }else if (i == 9 && j == 5){
                matriz[i][j] = 5;
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