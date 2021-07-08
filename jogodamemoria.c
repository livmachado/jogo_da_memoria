#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int logo(void);
int menu(void);

int main(void){
    logo();
    menu();
    return 0;
}

int logo(void){

    printf("\n\n");
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
    printf("\n\n");
    printf("\t                                     Pressione o ENTRER para comecar                                        \n");
    getchar();
    system("cls");

    return 0;
}

int menu(void){
    int opcao;
    printf("\n\n");
    printf("************************************************************\n");
    printf("\t 1 - Iniciar\n\t 2 - Instrucao\n\t 3 - Ranking\n\t 4 - Sair\n");
    printf("************************************************************\n");

    printf("\n Digite a opcao desejada: ");
    scanf ("%d", &opcao);

    if (opcao>=5 || opcao <1){
        system("cls");
        printf("Escolha uma opcao valida.\n ");
        printf("Aperte ENTRER para voltar. \n");
        srand(time(NULL));
        getchar();
         
        return menu();
    }
    return 0;
}
