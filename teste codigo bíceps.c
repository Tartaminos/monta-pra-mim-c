#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum series {hipertrofia_base,resistencia,potencia,cadencia_reduzida, dropset};
enum exercicio{rosca_direta_halter,rosca_barraW,rosca_direta_barraReta,rosca_martelo,rosca_barraH,rosca_scott,rosca_alternada,
rosca_alternada_comgiro,rosca_alternada_martelo};


int main (void){


    printf("Sera exibido exercicios para o grupo muscular peitoral.\n\n");


    printf("\nMetodo");

    srand ((unsigned) time (NULL));
    int series = rand() %5;
    int exercicio = rand() %8;
    char enter;



    if(series == 0){
        printf("\nHipertrofia Base 4 Series de 8 a 10 Repeticoes \n");
    }
    if(series == 1){
        printf("\nResistencia 5 Series de 15 a 25 Repeticoes \n");
    }
    if(series == 2){
        printf("\nPotencia 4 Series de 6 a 10 Repeticoes Concentricas Rapidas \n");
    }
    if(series == 3){
        printf("\nCadencia Reduzida 3 Series de 8 a 10 Repeticoes Excentrica e Concentrica em 5 segundos \n");
    }
    if(series == 4){
        printf("\nDrop Set 3 Series de 6-8-10-12 Repeticoes \n");
    }
    for(series >= 0; series <= 5;series = series - 4){


    }

    {printf ("\n");}



     printf ("serao exibidos exercicios aleatorios, escolha quantos quiser \n \n");


        printf("EXERCICIOS \n \n");

    for(exercicio >= 0; exercicio <= 8; exercicio = exercicio+1){



    if(exercicio == 0){
    printf ("Rosca Direta Halter \n");}

    if(exercicio == 1){
    printf ("Rosca Barra W \n");}

    if(exercicio == 2){
    printf ("Rosca Barra Reta \n");}

    if(exercicio == 3){
    printf ("Rosca Martelo \n");}

    if(exercicio == 4){
    printf ("Rosca Barra H \n");}

    if(exercicio == 5){
    printf ("Rosca Scott \n");}

    if(exercicio == 6){
    printf ("Rosca Alternada Halter \n");}

    if(exercicio == 7){
    printf ("Rosca Halter com Giro \n");}

    if(exercicio == 8){
    printf ("Rosca Alternada Pegada Neutra \n");}


    }
    {printf("\nBOM TREINO\n\n");}


    printf("\nPressione E para encerrar: ");
        scanf("%d",enter);

    return 0;
    }
