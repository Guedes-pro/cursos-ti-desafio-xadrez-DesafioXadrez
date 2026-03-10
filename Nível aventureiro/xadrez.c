#include <stdio.h>
#include <string.h>


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

       // ###### Estrutura de repetção WHILE ######

       while (movimentacao <= rainha)
         {
            printf("%s\n", direcao);
            movimentacao ++;
         }
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
          strcpy(direcao, "Cima, Esquerda");
         break;

        case 2:
          strcpy(direcao, "Cima, Direita");
         break;

        case 3:
          strcpy(direcao, "Baixo, Esquerda");
         break;

        case 4:
          strcpy(direcao, "Baixo, Esquerda");
         break;

        default:
          printf("Opção Inválida!!\n");
         break;
       }
       
       //###### Estrutura de repetção DO-WHILE ######

        do
         {
            printf("%s\n", direcao);
            movimentacao ++;
         } while (movimentacao <= bispo);
       printf("Seu Bispo foi %d casas para %s com sucesso!!\n\n", bispo, direcao);
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

       // ###### Estrutura de repetção FOR ######

       for(movimentacao; movimentacao <= torre; movimentacao++)
         {
            printf("%s\n", direcao);
         }  
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
            for (cavalo = 1; cavalo <= 2; cavalo++){
              printf("%s\n", direcao_cavalo_1);
            }
           
            printf("%s\n", direcao_cavalo_2);
            movimentacao --;
         }
       printf("Seu Cavalo foi para %s, %s com sucesso!!\n\n", direcao_cavalo_1, direcao_cavalo_2);
     break;

    default:
        printf("Opção Inválida!!\n");
     break;
    }
    
    

    return 0;
}
