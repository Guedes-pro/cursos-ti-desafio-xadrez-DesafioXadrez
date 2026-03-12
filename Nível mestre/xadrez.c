#include <stdio.h>
#include <string.h>

// RECURSIVIDADE usada na Torre e na Rainha
void imprimir_palavra(char* palavra){
        printf("%s\n", palavra);
    }


void mov_recursivo(int n, char* palavra){
    if (1 <= n){
     imprimir_palavra(palavra);   
     mov_recursivo(n - 1, palavra);
    }
}

// RECURSIVIDADE usada no Bispo 

void mov_bispo(int b, int m, char* palavra, char* palavra2){
    //(utilizando o loop exterior p/ mov. na Vertical e interior p/ mov. na Horizontal)
    for (m; m <= b; m ++){
      printf("%s, ", palavra);
     while(m <= b){
          printf("%s\n", palavra2);
        break;
        }
     }
}





int main() {
    
    /* ########################### 
       # DECLARAÇÃO DE VARIÁVEIS #
       ###########################*/

    int rainha, bispo, torre, cavalo;
    int movimentacao = 1;
    int escolha_pecas;
    int escolha_direcao;
    char direcao[10];
    char direcao_cavalo_1[10];
    char direcao_cavalo_2[10];
    char direcao_bispo_1[10];
    char direcao_bispo_2[10];


    /* ###################
       # MENU DE SELEÇÃO #
       ###################*/

    printf("Bem vindo ao Xadrez em C\n\n");
    printf("Selecione a peça que você quer movimentar:\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    scanf("%d", &escolha_pecas);


    /* #########################
       # ESCOLHA DE MOVIMENTOS #
       #########################*/

    switch (escolha_pecas)
    {
    // ###### Movimentos da Rainha ######
    case 1:
       printf(" A Rainha andará quantas casas? (1 a 8)\n");
       scanf("%d", &rainha);
       printf(" Para qual direção?\n");
       printf("1. Cima\n");
       printf("2. Baixo\n");
       printf("3. Esquerda\n");
       printf("4. Direita\n");
       printf("5. Cima, Esquerda\n");
       printf("6. Cima, Direita\n");
       printf("7. Baixo, Esquerda\n");
       printf("8. Baixo, Direita\n");
       scanf("%d", &escolha_direcao); 

       switch (escolha_direcao)
       {
        case 1:
          strcpy(direcao, "Cima");
         break;

        case 2:
          strcpy(direcao, "Baixo");
         break;

        case 3:
          strcpy(direcao, "Esquerda");
         break;

        case 4:
          strcpy(direcao, "Direita");
         break;

        case 5:
          strcpy(direcao, "Cima, Esquerda");
         break;

        case 6:
          strcpy(direcao, "Cima, Direita"); 
         break;

        case 7:
          strcpy(direcao, "Baixo, Esquerda");
         break;

        case 8:
          strcpy(direcao, "Baixo, Direita");
         break;

        default:
          printf("Opção Inválida!!\n");
         break;
       }

       // ###### Recursividade declarada anteriormente ######

       mov_recursivo(rainha, direcao);
       printf("Sua Rainha foi %d casas para %s com sucesso!!\n\n", rainha, direcao);
     break;

    // ###### Movimentos do Bispo ######
    case 2:
       printf(" O Bispo andará quantas casas? (1 a 8)\n");
       scanf("%d", &bispo);
       printf(" Para qual direção?\n");
       printf("1. Cima, Esquerda\n");
       printf("2. Cima, Direita\n");
       printf("3. Baixo, Esquerda\n");
       printf("4. Baixo, Direita\n");
       scanf("%d", &escolha_direcao); 

       switch (escolha_direcao)
       {
        case 1:
          strcpy(direcao_bispo_1, "Cima");
          strcpy(direcao_bispo_2, "Esquerda");
         break;

        case 2:
          strcpy(direcao_bispo_1, "Cima");
          strcpy(direcao_bispo_2, "Direita");
         break;

        case 3:
          strcpy(direcao_bispo_1, "Baixo");
          strcpy(direcao_bispo_2, "Esquerda");
         break;

        case 4:
          strcpy(direcao_bispo_1, "Baixo");
          strcpy(direcao_bispo_2, "Direita");
         break;

        default:
          printf("Opção Inválida!!\n");
         break;
       }
       
       // ###### Recursividade declarada anteriormente ######

       mov_bispo(bispo, movimentacao, direcao_bispo_1, direcao_bispo_2);
       printf("Seu Bispo foi %d casas para %s, %s com sucesso!!\n\n", bispo, direcao_bispo_1, direcao_bispo_2);
     break;

    // ###### Movimentos da Torre ######
    case 3:
       printf(" A Torre andará quantas casas? (1 a 8)\n");
       scanf("%d", &torre);
       printf(" Para qual direção?\n");
       printf("1. Cima\n");
       printf("2. Baixo\n");
       printf("3. Esquerda\n");
       printf("4. Direita\n");
       scanf("%d", &escolha_direcao); 

       switch (escolha_direcao)
       {
        case 1: 
          strcpy(direcao, "Cima"); 
         break;

        case 2:
          strcpy(direcao, "Baixo"); 
         break;

        case 3: 
          strcpy(direcao, "Esquerda");
         break;

        case 4: 
          strcpy(direcao, "Direita");
         break;      
       
        default:
          printf("Opção Inválida!!\n");
         break;
       }   

       // ###### Recursividade declarada anteriormente ######

       mov_recursivo(torre, direcao);
       printf("Sua Torre foi %d casas para %s com sucesso!!\n\n", torre, direcao);
     break;

     // ###### Movimentos do Cavalo ######
    case 4:
       printf(" O Cvalo andará para qual direção?\n");
       printf("1. Esquerda, Cima\n");
       printf("2. Esquerda, Baixo\n");
       printf("3. Direita, Cima\n");
       printf("4. Direita, Baixo\n");
       printf("5. Cima, Esquerda\n");
       printf("6. Cima, Direita\n");
       printf("7. Baixo, Esquerda\n");
       printf("8. Baixo, Direita\n");
       scanf("%d", &escolha_direcao); 

       switch (escolha_direcao)
       {
        case 1:
          strcpy(direcao_cavalo_1, "Esquerda");
         strcpy(direcao_cavalo_2, "Cima");
         break;

        case 2:
         strcpy(direcao_cavalo_1, "Esquerda");
         strcpy(direcao_cavalo_2, "Baixo");
         break;

        case 3:
          strcpy(direcao_cavalo_1, "Direita");
          strcpy(direcao_cavalo_2, "Cima");
         break;

        case 4:
          strcpy(direcao_cavalo_1, "Direita");
          strcpy(direcao_cavalo_2, "Baixo");
         break;

        case 5:
          strcpy(direcao_cavalo_1, "Cima");
          strcpy(direcao_cavalo_2, "Esquerda");
         break;

        case 6:
          strcpy(direcao_cavalo_1, "Cima");
          strcpy(direcao_cavalo_2, "Direita");

         break;

        case 7:
          strcpy(direcao_cavalo_1, "Baixo");
          strcpy(direcao_cavalo_2, "Esquerda");
         break;

        case 8:
          strcpy(direcao_cavalo_1, "Baixo");
          strcpy(direcao_cavalo_2, "Direita");
         break;

        default:
          printf("Opção Inválida!!\n");
         break;
       }

       // ###### Estrutura de repetção LOOP ANINHADO ######

       while (movimentacao == 1)
       {
         for (cavalo = 3, movimentacao; cavalo > movimentacao; cavalo--){
              printf("%s\n", direcao_cavalo_1);
            }
            printf("%s\n", direcao_cavalo_2);
            break;
       }
         
       printf("Seu Cavalo foi para %s, %s com sucesso!!\n\n", direcao_cavalo_1, direcao_cavalo_2);
     break;

    default:
        printf("Opção Inválida!!\n");
     break;
    }
    
    

    return 0;
}
