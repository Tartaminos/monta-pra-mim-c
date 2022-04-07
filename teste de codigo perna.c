#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum series {hipertrofia_base,resistencia,potencia,cadencia_reduzida, dropset};
enum exercicio{agachamento, cadeira_extensora, mesa_flexora, flexora_em_pe, adutora, abdutora,gemeos_em_pe,
gemeos_sentado,agachamento_no_ar,afundo,avanco,pistol,agachamento_sumo};


int main (void){


    printf("Sera exibido exercicios para o grupo muscular de membros inferiores.\n\n");


    printf("\nMetodo");

    srand ((unsigned) time (NULL));
    int series = rand() %5;
    int exercicio = rand() %12;
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

    for(exercicio >= 0; exercicio <= 13; exercicio = exercicio+1){



    if(exercicio == 0){
    printf ("Agachamento\n ");}

    if(exercicio == 1){
    printf ("Cadeira Extensora\n ");}

    if(exercicio == 2){
    printf ("Mesa Flexora\n ");}

    if(exercicio == 3){
    printf ("Flexora em Pe\n ");}

    if(exercicio == 4){
    printf ("Adutora\n ");}

    if(exercicio == 5){
    printf ("Abdutora\n ");}

    if(exercicio == 6){
    printf ("Gemeos em Pe\n ");}

    if(exercicio == 7){
    printf ("Gemeos Sentado\n ");}

    if(exercicio == 8){
    printf ("Agachamento no Ar\n ");}

    if(exercicio == 9){
    printf ("Afundo\n ");}

    if(exercicio == 10){
    printf ("Avanco\n ");}

    if(exercicio == 11){
    printf ("Pistol\n ");}

    if(exercicio == 12){
    printf ("Agachamento Sumo\n ");}

    }

    {printf("\nBOM TREINO\n\n");}

    printf("\nPressione E para encerrar: ");
        scanf("%d",enter);
    return 0;
    }
