#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum series {hipertrofia_base,resistencia,potencia,cadencia_reduzida, dropset};
enum exercicio{flexa_braco,supino_reto_barra,supino_inclinado_barra,supino_halter_reto,supino_halter_inclinado,cruxifixo_reto,
crucifixo_inclinado,peckdeck,crossover};


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

    {printf ("\n");
    }


     printf ("serao exibidos exercicios aleatorios, escolha quantos quiser \n \n");


        printf("EXERCICIOS \n \n");

    for(exercicio >= 0; exercicio <= 8; exercicio = exercicio+1){



    if(exercicio == 0){
    printf ("Flexao de Braco \n");}

    if(exercicio == 1){
    printf ("Supino Plano Barra \n");}

    if(exercicio == 2){
    printf ("Supino Inclinado Barra \n");}

    if(exercicio == 3){
    printf ("Supino com Halter Plano \n");}

    if(exercicio == 4){
    printf ("Supino com Halter Inclinado \n");}

    if(exercicio == 5){
    printf ("Crucifixo Plano \n");}

    if(exercicio == 6){
    printf ("Crucifixo Inclinado \n");}

    if(exercicio == 7){
    printf ("Peck Deck \n");}

    if(exercicio == 8){
    printf ("Cross Over \n");}
}

    {printf("\nBOM TREINO\n\n");}

    printf("\nPressione E para encerrar: ");
        scanf("%d",enter);


    return 0;
    }
