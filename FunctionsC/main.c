#include <stdio.h>
#include <stdlib.h>
float gradeAvg(float teste1, float teste2, float teste3); //criar prototype da fun��o

//prototypes n�o s�o necess�rios se n�o retornar valor ou se retornar valor inteiro

/* ------------- Functions ------------ */

int main()
{
    //Exemplo 1
    printf("-------------- EXEMPLO 1 --------------\n");

    int i;

    printf("Escreve um numero inteiro:\n");
    scanf("%d", &i);

    //chamar fun��o half, passar o valor de i
    half(i);

    //mostra que a fun��o n�o alterou o valor de i:
    printf("\nAqui no main o valor de i e ainda %d.\n", i);


    /* ------------------------------------------ */


    //Exemplo 2 - passar um array para uma fun��o / aqui o nome � alterado
    printf("\n-------------- EXEMPLO 2 --------------\n");

    char name[18] = "Cormoran Strike";

    change (name);

    printf("\nAqui no main o nome agora e %s.\n", name);


    /* ------------------------------------------ */


    //Exemplo 3 - alterar valores de n�o-arrays:
    printf("\n-------------- EXEMPLO 3 --------------\n");

    int k;
    printf("\nEscreve um numero inteiro:\n");
    scanf("%d", &k);

    half2(&k);
    //mostra que a fun��o alterou  valor no main:
    printf("\nAqui no main o valor de k e agora %d. \n", k);


    /* ------------------------------------------ */


    //Exemplo 4 - retornar dados das fun��es
    printf("\n-------------- EXEMPLO 4 --------------\n");

    float nota1, nota2, nota3;
    float average;

    printf("Qual foi a nota do primeiro teste? ");
    scanf("%f", &nota1);
    printf("Qual foi a nota do segundo teste? ");
    scanf("%f", &nota2);
    printf("Qual foi a nota do terceiro teste? ");
    scanf("%f", &nota3);

    average = gradeAvg(nota1, nota2, nota3);
    printf("\nCom essas tres notas, a media e %.2f", average);


    return 0;
}

/* ------------------ FUN��ES ----------------- */

//Fun��o half: (Exemplo 1)

half (int i) //recebe o valor de i
{
    i = i / 2;
    printf("A metade do valor e %d.\n", i);
    return; //volta � main
}

//Fun��o change: (Exemplo 2)

change(char name[18])
{
   strcpy(name, "XXXXXXXXXXXX");
   return;
}

//Fun��o half2: (Exemplo 3)

half2 (int *k)
{
    *k = *k / 2;
    printf("A metade do valor e %d.\n", *k);
    return;
}

//Fun��o average: (Exemplo 4)

float gradeAvg(float teste1, float teste2, float teste3)
{
    float localAverage;
    localAverage = (teste1 + teste2 + teste3) / 3;
    return(localAverage); //retorna o average para a Main()
}
