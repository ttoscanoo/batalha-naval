    #include <stdio.h>

    // Função para imprimir o tabuleiro
    void imprimir_tabuleiro(int tabuleiro[10][10]){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    // Função para verificar se é possível posicionar o navio vertical
    int pode_posicionarV(int tabuleiro[10][10], int linha, int coluna){ 
        if (linha + 3 <= 10){
            for (int i = 0; i < 3; i++){
                if (tabuleiro[linha + i][coluna] != 0){
                    return 0;
                    break;
                }
            }
        }
        return 1;
    }

    // Função para verificar se é possível posicionar o navio horizontal
    int pode_posicionarH(int tabuleiro[10][10], int linha, int coluna){ 
        if (coluna + 3 <= 10){
            for (int i = 0; i < 3; i++){
                if (tabuleiro[linha][coluna + i] != 0){
                    return 0;
                    break;
                }
            }
        }
        return 1;
    }

    //Função para verificar se é possível posicionar o navio diagonal
    //Como o enunciado do Nível Aventureiro não especifica qual lado da diagonal
    //A verificação será apenas para diagonal para direita e para baixo
    int pode_posicionarD(int tabuleiro[10][10], int linha, int coluna){
        if (coluna + 3 <= 10 && linha + 3 <= 10){
            for (int i = 0; i < 3; i++){
                if (tabuleiro[linha + i][coluna + i] != 0){
                    return 0;
                    break;
                }
            }
        }
        return 1;
    }


    // Função para posicionar o navio vertical
    void pos_navio_Vert (int tabuleiro[10][10], int posicao[2], int navio[3]){
        if (pode_posicionarV(tabuleiro, posicao[0], posicao[1])){
            for (int i = 0; i < 3; i++){
                tabuleiro[posicao[0] + i][posicao[1]] = navio[i];
            }     
        }
    }

    // Função para posicionar o navio horizontal
    void pos_navio_Hor (int tabuleiro[10][10], int posicao[2], int navio[3]){
        if (pode_posicionarH(tabuleiro, posicao[0], posicao[1])){
            for (int i = 0; i < 3; i++){
                tabuleiro[posicao[0]][posicao[1] + i] = navio[i];
            }
        }     

    }

    //Função para posicionar navio na diagonal
    void pos_navio_Diagonal (int tabuleiro[10][10], int posicao[2], int navio[3]){
        if (pode_posicionarD(tabuleiro, posicao[0], posicao[1])){
            for (int i = 0; i < 3; i++){
                tabuleiro[posicao[0] + i][posicao[1] + i] = navio[i];
            }
        }     
    }

    int main(){
        //Inicializa o tabuleiro
        int tabuleiro[10][10] = {0};
        
        int navio[3] = {3, 3, 3};
        
        //Determina a posição inicial do navio
        int posicao1[2] = {1, 1};
        int posicao2[2] = {2, 5};

        //Mais duas posições definidas para navios na verticais
        int posicao3[2] = {4, 0};
        int posicao4[2] = {6, 6};

        //Colocar o navio horizontal no tabuleiro
        pos_navio_Hor(tabuleiro, posicao1, navio);
     
        //Colocar o navio vertical no tabuleiro
        pos_navio_Vert(tabuleiro, posicao2, navio);

        //Colocar o navio diagonal no tabuleiro
        pos_navio_Diagonal(tabuleiro, posicao3, navio);

        pos_navio_Diagonal(tabuleiro, posicao4, navio);
        
        imprimir_tabuleiro(tabuleiro);

        return 0;
        
    }
