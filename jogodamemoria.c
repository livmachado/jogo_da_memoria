#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

#define Linha 5
#define Coluna 4 
#define Pares 10 // 10 pares de cartas

typedef struct {
    char nome [40];
    int pontuacao;
} Jogador;

typedef struct {
    bool carta_aberta;
} Tabuleiro;


int logo(void);
int menu(void);
int modo_de_jogo (void);
int opcao_invalida(void);
int instrucao (void);
int play_singleplayer(char jogador1 [40]);

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
    printf("\t\t\t 1 - Iniciar\n\t\t\t 2 - Instrucao\n\t\t\t  3 - Sair\n");
    printf("****************************************************************************************************************\n");

    printf("\n Digite a opcao desejada: ");
    scanf ("%d", &opcao);

    switch (opcao){
        case 1:
            modo_de_jogo();
            break;
        case 2:
            instrucao();
            break;
        case 3:
            exit(1);    
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
    
    system("cls");
    printf("\n\n");
    printf("****************************************************************************************************************\n");
    printf("\t\t\t 1- Singleplayer (1 jogador)\n");
    printf("\t\t\t 2- Multiplayer  (2 jogadores)\n");
    printf("****************************************************************************************************************\n");
    printf("\n\n");
    printf(" Escolha um modo de jogo: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            system("cls");
            printf("\n\n****************************************************************************************************************\n");
            puts("Digite seu nome: ");
            scanf("%s", jogador1.nome);
            printf("****************************************************************************************************************\n");
            printf("\t\t\t Aperte ENTRER para comecar. \n");
            if (getchar()){
                system("cls");
                return play_singleplayer(jogador1.nome);
            }

        case 2:
            system("cls");
            printf("\n\n****************************************************************************************************************\n");
            puts("Digite o nome do jogador 1: ");
            scanf("%s", jogador1.nome);
            puts("Digite o nome do jogador 2: ");
            scanf("%s", jogador2.nome);
            printf("****************************************************************************************************************\n");
            printf("\t\t\t Aperte ENTRER para comecar. \n");
            if (getchar()){
                system("cls");
                //play_multiplayer(jogador1.nome,jogador2.nome);
                return 0;
            }

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

int instrucao (void){
    system("cls");
    printf("\n\n****************************************************************************************************************\n");
    printf("************************************************** Instrucao ***************************************************\n");
    printf("\t\t\t\t    Decore as letras e encontre seus pares.\n\t\t\t\t      Quantos mais acertos, mais pontos!\n");
    printf("****************************************************************************************************************\n");
    printf("\t\t\t\t\t Aperte ENTRER para voltar. \n");
    system("pause > NUL");
    if(getchar()){
        system("cls");
        return menu();
    }
    return 0;
}

int preencheCampo(Tabuleiro tabuleiro[Linha][Coluna]){
    int total_de_cartas = Linha * Coluna, contadorLinha, contadorColuna, contadorCarta;
    Tabuleiro gabarito[Linha][Coluna];

    srand(time(NULL));

    for(contadorCarta=0; contadorCarta<total_de_cartas;){
        for(contadorLinha=0; contadorLinha<Linha; contadorLinha++){
            for (contadorColuna; contadorColuna< Coluna; contadorColuna++){
                tabuleiro[contadorLinha][contadorColuna]= rand() % 9;

            }
        }

    }




}

int ConstroiTabuleiro (Tabuleiro tabuleiro[Linha][Coluna]){

    int contadorLinha, contadorColuna, i, j;

    for (contadorLinha=0; contadorLinha<Linha; contadorLinha++){
        for(contadorColuna=0; contadorColuna<Coluna; contadorColuna++){
            tabuleiro[i][j].carta_aberta = false            
        }
    }

    preencheCampo(tabuleiro);


}



int play_singleplayer(char jogador1, Tabuleiro tabuleiro [Linha][Coluna]){

    int i, j, col[Coluna]; 

    

    printf("\n\n****************************************************************************************************************\n");
    printf("********************************************* Jogo da memoria **********************************************************\n");
    
    
    for(i=0; i<Coluna; i++){
        Col[i]=i;
        printf("%d\t", col[i]+1);
    }

    printf ("\n");

    for(i=0; i<Linha; i++){
        printf("\t%d", i+1)
        for(j=0; j<Coluna; j++){
            printf("[%c]\t", tabuleiro[i][j])
        }
    }

    printf(" Abra duas cartas, insira LINHA COLUNA da primeira carta: \n");
    scanf("%d %d", &linha1, &coluna1);
    printf(" Insira LINHA COLUNA da segunda carta: \n");
    scanf("%d %d", &linha1, &coluna1);

}


