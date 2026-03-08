#include <stdio.h>


int main() {
    
    /* ########################### 
       # DECLARAÇÃO DE VARIÁVEIS #
       ###########################*/

    int rainha;
    int bispo;
    int torre;
    int direcao;
    int movimentacao = 1;
    int escolha_pecas;


    /* ###################
       # MENU DE SELEÇÃO #
       ###################*/

    printf("Bem vindo ao Xadrez em C\n\n");
    printf("Selecione a peça que você quer movimentar:\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    scanf("%d", &escolha_pecas);


    /* #########################
       # ESCOLHA DE MOVIMENTOS #
       #########################*/

    switch (escolha_pecas)
    {
    // Movimentos da Rainha, estrutura de repetção while
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
       scanf("%d", &direcao); 

       switch (direcao)
       {
        case 1:
         while (movimentacao <= rainha)
         {
            printf("Cima\n");
            movimentacao ++;
         }
        break;
        case 2:
         while (movimentacao <= rainha)
         {
            printf("Baixo\n");
            movimentacao ++;
         }
        break;
        case 3:
         while (movimentacao <= rainha)
         {
            printf("Esquerda\n");
            movimentacao ++;
         }
        break;
        case 4:
         while (movimentacao <= rainha)
         {
            printf("Direita\n");
            movimentacao ++;
         }
        break;
        case 5:
         while (movimentacao <= rainha)
         {
            printf("Cima, Esquerda\n");
            movimentacao ++;
         }
        break;
        case 6:
         while (movimentacao <= rainha)
         {
            printf("Cima, Direita\n");
            movimentacao ++;
         }
        break;
        case 7:
         while (movimentacao <= rainha)
         {
            printf("Baixo, Esquerda\n");
            movimentacao ++;
         }
        break;
        case 8:
         while (movimentacao <= rainha)
         {
            printf("Baixo, Direita\n");
            movimentacao ++;
         }
        break;
        default:
         printf("Opção Inválida!!\n");
        break;
       }
       printf("Sua Rainha foi movimentada %d casas com sucesso!!\n", rainha);


     break;

    // Movimentos do Bispo, estrutura de repetção do-while
    case 2:
       printf(" O Bispo andará quantas casas? (1 a 8)\n");
       scanf("%d", &bispo);
       printf(" Para qual direção?\n");
       printf("1. Cima, Esquerda\n");
       printf("2. Cima, Direita\n");
       printf("3. Baixo, Esquerda\n");
       printf("4. Baixo, Direita\n");
       scanf("%d", &direcao); 

       switch (direcao)
       {
        case 1:
         do
         {
            printf("Cima, Esquerda\n");
            movimentacao ++;
         } while (movimentacao <= bispo);
        break;
        case 2:
         do
         {
            printf("Cima, Direita\n");
            movimentacao ++;
         } while (movimentacao <=  bispo);
        break;
        case 3:
         do
         {
            printf("Baixo, Esquerda\n");
            movimentacao ++;
         } while (movimentacao <= bispo);
        break;
        case 4:
         do
         {
            printf("Baixo, Direita\n");
            movimentacao ++;
         } while (movimentacao <= bispo);
        break;
        default:
         printf("Opção Inválida!!\n");
        break;
       }
       printf("Seu Bispo foi movimentado %d casas com sucesso!!\n", bispo);

     break;

    // Movimentos da Torre, estrutura de repetção for
    case 3:
       printf(" A Torre andará quantas casas? (1 a 8)\n");
       scanf("%d", &torre);
       printf(" Para qual direção?\n");
       printf("1. Cima\n");
       printf("2. Baixo\n");
       printf("3. Esquerda\n");
       printf("4. Direita\n");
       scanf("%d", &direcao); 

       switch (direcao)
       {
       case 1: 
         for(movimentacao; movimentacao <= torre; movimentacao++)
         {
            printf("Cima\n");
         }  
        break;
       case 2: 
         for(movimentacao; movimentacao <= torre; movimentacao++)
         {
            printf("Baixo\n");
         }  
        break;
       case 3: 
         for(movimentacao; movimentacao <= torre; movimentacao++)
         {
            printf("Esquerda\n");
         }  
        break;
       case 4: 
         for(movimentacao; movimentacao <= torre; movimentacao++)
         {
            printf("Direita\n");
         }  
        break;      
       
       default:
         printf("Opção Inválida!!\n");
        break;
       }
       printf("Sua Torre foi movimentada %d casas com sucesso!!\n", torre);
     break;
    default:
        printf("Opção Inválida!!\n");
     break;
    }
    
    

    return 0;
}
