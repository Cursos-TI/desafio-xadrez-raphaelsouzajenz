#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Recursividade Bispo, Torre e Rainha desafio mestre
void movimentoBispo(int casas){
    if (casas > 0)
    {
        printf("Cima,direita!\n");
        movimentoBispo(casas - 1);
    }
    
}
void movimentoTorre(int casas){
    if (casas > 0)
    {
        printf("Direita!\n");
        movimentoTorre(casas - 1);
    }
    
}
void movimentoRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda!\n");
        movimentoRainha(casas - 1);
    }
    
}

//Recursividade do cavalo
void movimenntoCavalo(int casas){
    while (movimenntoCavalo)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima!\n");
        }
        printf("Direita!\n");
        break; 
    }
}
  


int main() {

    printf("Bem vindo ao desafio de xadrez!\n");
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 1;
    
    int i; //Variável para loops

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("\nBispo se movimentou para:\n");

    i = 1;

    while (i <= casasBispo)
    {
        printf("Cima, direita!\n");
        i++;
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nTorre se movimentou para:\n");

    for(i = 1; i <= casasTorre; i++){
       
        printf("Direita!\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nRainha se movimentou para:\n");

    i = 1;

    do
    {
        printf("Esquerda!\n");
        i++;
        
    } while (i <= casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nCavalo se movimentou para:\n");


    while (casasCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo!\n");
        }
        printf("Esquerda!\n"); 
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    //Imprimindo movimento do bispo
    printf("\nBispo se movimentou para:\n");
    movimentoBispo(5);
    
    
    //Imprimindo movimento da torre
    printf("\nTorre se movimentou para:\n");
    movimentoTorre(5);
    
    
    //Imprimindo movimento da rainha
    printf("\nRainha se movimentou para:\n");
    movimentoRainha(8);
    

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Imprimindo movimento do cavalo
    printf("\nCavalo se movimentou para:\n");
    movimenntoCavalo(1);

    return 0;
}
    