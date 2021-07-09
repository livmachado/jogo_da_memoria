#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct {
    char nome [40];
    int pontuacao;
} Jogador;


int logo(void);
int menu(void);
int modo_de_jogo (void);
int opcao_invalida(void);

int main(void){
    logo();
    menu();
    return 0;
}

int logo(void){

    printf("\n\n");
    printf("****************************************************************************************************************\n");
    printf("                               _________   __________   _________   __________                                  \n");
    printf("                              |______   | |   ____   | |   ______| |   ____   |                                 \n");
    printf("                                     |  | |  |    |  | |  |        |  |    |  |                                 \n");
    printf("                              _____  |  | |  |    |  | |  |  _____ |  |    |  |                                 \n");
    printf("                              |  |   |  | |  |    |  | |  |  |_  | |  |    |  |                                 \n");
    printf("                              |  |___|  | |  |____|  | |  |___|  | |  |____|  |                                 \n");
    printf("                              |_________| |__________| |_________| |__________|                                 \n");
    printf("                                         ____________    ____________                                           \n");
    printf("                                        |   ______   |  |    ____    |                                          \n");
    printf("                                        |  |      |   | |   |    |   |                                          \n");
    printf("                                        |  |       |  | |   |____|   |                                          \n");
    printf("                                        |  |       |  | |    ____    |                                          \n");
    printf("                                        |  |______/   | |   |    |   |                                          \n");
    printf("                                        |____________/  |___|    |___|                                          \n");
    printf(" ______________    __________    ______________    __________    _____________     ____________    ____________ \n");
    printf("|   __    __   |  |   _______|  |   __    __   |  |   ____   |  |   _______   |   |____    ____|  |    ____    |\n");
    printf("|  |  |  |  |  |  |  |          |  |  |  |  |  |  |  |    |  |  |  |       |  |        |  |       |   |    |   |\n");
    printf("|  |  |  |  |  |  |  |______    |  |  |  |  |  |  |  |    |  |  |  |_______| /         |  |       |   |____|   |\n");
    printf("|  |  |__|  |  |  |   ______|   |  |  |__|  |  |  |  |    |  |  |   ______   |         |  |       |    ____    |\n");
    printf("|  |        |  |  |  |          |  |        |  |  |  |    |  |  |  |      |   |        |  |       |   |    |   |\n");
    printf("|  |        |  |  |  |_______   |  |        |  |  |  |____|  |  |  |       |   |   ____|  |____   |   |    |   |\n");
    printf("|__|        |__|  |__________|  |__|        |__|  |__________|  |__|        |___| |____________|  |___|    |___|\n");
    printf("****************************************************************************************************************\n");
    printf("\n\n");
    printf("\t                              Pressione o ENTRER para comecar                                               \n");
    getchar();
    system("cls");

    return 0;
}

int menu(void){
    int opcao;
    printf("\n\n");
    printf("****************************************************************************************************************\n");
    printf("\t\t\t 1 - Iniciar\n\t\t\t 2 - Instrucao\n\t\t\t 3 - Ranking\n\t\t\t 4 - Sair\n");
    printf("****************************************************************************************************************\n");

    printf("\n Digite a opcao desejada: ");
    scanf ("%d", &opcao);

    switch (opcao){
        case 1:
            system("cls");
            modo_de_jogo();
            break;
        case 2:
            system("cls");
            return 2;
            break;
        case 3:
            system("cls");
            return 3;
            break;
        case 4:
            system("cls");
            return 4;
            break;    
        default:
            opcao_invalida();
            if (getchar()){
                system("cls");
                return menu();
            }
            break;
    }
    return 0;
}

int modo_de_jogo (void){
    int opcao;
    Jogador jogador1, jogador2;
    
    printf("\n\n");
    printf("****************************************************************************************************************\n");
    printf("\t\t\t 1- Singleplayer (1 jogador)\n");
    printf("\t\t\t 2- Multiplayer  (2 jogadores)\n");
    printf("****************************************************************************************************************\n");
    printf("\n\n");
    printf(" Escolha um modo de jogo:");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            system("cls");
            printf("\n\n****************************************************************************************************************\n");
            puts(" Digite seu nome:");
            gets(jogador1.nome);
            jogador1.pontuacao=0;
            return 1;

        case 2:
            system("cls");
            printf("\n\n****************************************************************************************************************\n");
            puts(" Digite o nome do jogador 1: ");
            gets(jogador1.nome);
            jogador1.pontuacao=0;
            puts("\t\t\t Digite o nome do jogador 2: ");
            gets(jogador2.nome);
            jogador2.pontuacao=0;
            return 2;

        default:
            opcao_invalida();
            if (getchar()){
                system("cls");
                return modo_de_jogo();
            }
            break;
    }
    return 0;
}

int opcao_invalida(void){
    system("cls");
    printf("\n\n****************************************************************************************************************\n");
    printf("\t\t\t Escolha uma opcao valida.\n ");
    printf("\t\t\t Aperte ENTRER para voltar. \n");
    printf("****************************************************************************************************************\n");
    system("pause > NUL");
    return 0;
}


