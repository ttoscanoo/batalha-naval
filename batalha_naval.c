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
        if (linha + 3 <= 10){                       //Verifica os limites do tabuleiro
            for (int i = 0; i < 3; i++){                
                if (tabuleiro[linha + i][coluna] != 0){ //Verifica se a posição está ocupada
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

    //Função para criar cone
    void criar_cone(int cone[3][5]) {
        for (int i = 0; i < 3; i++) { 
            for (int j = 0; j < 5; j++){ 
                if (j>=2-i && j<=2+i){ //Verifica se está dentro do cone){
                        cone[i][j] = 1;
                }
            }
        }
    }

    //Função para colocar cone
    void colocar_cone(int tabuleiro[10][10], int posicao[2], int cone[3][5]){
        //Verifica se a posição está dentro dos limites do tabuleiro
        if (posicao[0] + 2 <= 10 && posicao[1] - 2 >= 0 && posicao[1] + 2 < 10){ 
            //Coloca o cone no tabuleiro
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 5; j++){
                    int linha = posicao[0] + i; 
                    int coluna = posicao[1] - 2 + j; 
                        if (cone[i][j] == 1){
                            tabuleiro[linha][coluna] = 5;
                        } 
                }
            }
        } else {
            printf("Posição inválida para a habilidade.\n");
        }       
    }    

    //Função para criar cruz
    void criar_cruz(int cruz[5][5]){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (i == 1 || j == 2){
                    cruz[i][j] = 1;
                }
            }
        }
    }
    
    //Função para criar octaedro
    void criar_octaedro(int octaedro[5][5]){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if ((i <= 2 && j >= 2 - i && j <= 2 + i) || 
                     (i > 2 && j >= i - 2 && j <= 6 - i)){ 
                    octaedro[i][j] = 1;
                }

            }
        }
    }

    //Função para colocar habilidade no tabuleiro
    void colocar_habilidade(int tabuleiro[10][10], int posicao[2], int habilidade[5][5]){
        //Verifica se a posição está dentro dos limites do tabuleiro
        if (posicao[0] + 2 <= 10 && posicao[0] - 2 >=0 && posicao[1] + 2 <= 10 && posicao[1] - 2 >= 0){ 
            //Coloca a habilidade no tabuleiro
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    int linha = posicao[0] - 2 + i;
                    int coluna = posicao[1] - 2 + j;
                        if (habilidade[i][j] == 1){
                            tabuleiro[linha][coluna] = 5;
                        } 
                }
            }
        } else {
            printf("Posição inválida para a habilidade.\n");
        }       
    }

    //Função Cópia do tabuleiro
    void copia_tabuleiro(int tabuleiro[10][10], int tabuleiro2[10][10]){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                tabuleiro2[i][j] = tabuleiro[i][j];
            }
        }
    }

    int main(){
        //Inicializa o tabuleiro
        int tabuleiro[10][10] = {0};
        //Inicia o navio tamanho 3
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
        
        printf("Tabuleiro com navios:\n");
        imprimir_tabuleiro(tabuleiro);

        printf("\n\n");
        
        //Habilidade Cone
        printf("Habilidade Cone:\n");
        int pos_cone[2] = {4, 5}; //Definindo a posição do cone
        int cone[3][5] = {0}; //Criando a matriz para receber cone
        int tabuleiro2[10][10] = {0}; //Criando o tabuleiro para o cone
        copia_tabuleiro(tabuleiro, tabuleiro2); //Copiando o tabuleiro original
        criar_cone(cone); //Criando o cone
        colocar_cone(tabuleiro2, pos_cone, cone); //Sobrepõe cone no tabuleiro
        imprimir_tabuleiro(tabuleiro2);
        
        printf("\n\n");

        //Habilidade Cruz
        printf("Habilidade Cruz:\n");
        int pos_cruz[2] = {5, 5}; 
        int cruz[5][5] = {0};
        int tabuleiro3[10][10] = {0}; 
        copia_tabuleiro(tabuleiro, tabuleiro3); //Copiando o tabuleiro original
        criar_cruz(cruz);
        colocar_habilidade(tabuleiro3, pos_cruz, cruz);
        imprimir_tabuleiro(tabuleiro3);

        printf("\n\n");

        //Habilidade Octaedro
        printf("Habilidade Octaedro:\n");
        int pos_octaedro[2] = {5, 5};
        int octaedro[5][5] = {0};
        int tabuleiro4[10][10] = {0};
        copia_tabuleiro(tabuleiro, tabuleiro4); //Copiando o tabuleiro original
        criar_octaedro(octaedro);
        colocar_habilidade(tabuleiro4, pos_octaedro, octaedro);
        imprimir_tabuleiro(tabuleiro4);

        printf("\n\n");

        return 0;
        
    }
