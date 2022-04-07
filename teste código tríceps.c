#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum series {hipertrofia_base,resistencia,potencia,cadencia_reduzida, dropset};
enum exercicio{triceps_pulley,triceps_corda,triceps_barraV,triceps_testa,triceps_frances,triceps_frances_unilateral,triceps_frances_cross,
triceps_banco,triceps_coice,triceps_coice_cross};


int main (void){


    printf("Sera exibido exercicios para o grupo muscular peitoral.\n\n");


    printf("\nMetodo");

    srand ((unsigned) time (NULL));
    int series = rand() %5;
    int exercicio = rand() %9;
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

    for(exercicio >= 0; exercicio <= 9; exercicio = exercicio+1){



    if(exercicio == 0){
    printf ("Triceps Pulley \n");}

    if(exercicio == 1){
    printf ("Triceps Corda \n");}

    if(exercicio == 2){
    printf ("Triceps Barra V \n");}

    if(exercicio == 3){
    printf ("Triceps Testa \n");}

    if(exercicio == 4){
    printf ("Triceps Frances \n");}

    if(exercicio == 5){
    printf ("Triceps Frances Unilateral \n");}

    if(exercicio == 6){
    printf ("Triceps Frances Cross \n");}

    if(exercicio == 7){
    printf ("Triceps Banco \n");}

    if(exercicio == 8){
    printf ("Triceps Coice \n");}

    if(exercicio == 9){
    printf ("Triceps Coice Cross \n");}


    }
    {printf("\nBOM TREINO\n\n");}

    printf("\nPressione E para encerrar: ");
        scanf("%d",enter);

    return 0;
    }
