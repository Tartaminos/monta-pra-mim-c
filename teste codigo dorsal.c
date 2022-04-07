#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum series {hipertrofia_base,resistencia,potencia,cadencia_reduzida, dropset};
enum exercicio{barra_fixa_pronada,barra_fixa_supinada,barra_fixa_neutra,puxador_frente,puxador_frente_neutro,puxador_frente_unilateral,
remada_aberta,remada_cavalinho,crucifixo_inverso_halter,crucifixo_inverso_cross};


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
    printf ("Barra Fixa Pronada \n");}

    if(exercicio == 1){
    printf ("Barra Fixa Supinada \n");}

    if(exercicio == 2){
    printf ("Barra Fixa Neutra \n");}

    if(exercicio == 3){
    printf ("Puxador Frente Pronado \n");}

    if(exercicio == 4){
    printf ("Puxador Frente Neutro \n");}

    if(exercicio == 5){
    printf ("Puxador Frente Unilateral \n");}

    if(exercicio == 6){
    printf ("Remada Aberta \n");}

    if(exercicio == 7){
    printf ("Remada Cavalinho \n");}

    if(exercicio == 8){
    printf ("Crucifixo Inverso Halter \n");}

    if(exercicio == 9){
    printf ("Crucifixo Inverso Cross \n");}


    }
    {printf("\nBOM TREINO\n\n");}

    printf("\nPressione E para encerrar: ");
        scanf("%d",enter);

    return 0;
    }
