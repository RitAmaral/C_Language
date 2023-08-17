#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vari�veis Pointers armazenam endere�os de mem�ria de outras vari�veis

    //Memory Address

     /*
        Quando uma vari�vel � criada em C, um endere�o de mem�ria � atribu�do � vari�vel.
        O endere�o de mem�ria � o local onde a vari�vel � armazenada no computador.
        Quando atribu�mos um valor � vari�vel, ele � armazenado neste endere�o de mem�ria.
        Para acess�-lo, usamos o operador de refer�ncia (&), e o resultado representa onde a vari�vel est� armazenada.
     */

     /*
        Os pointers s�o importantes em C, pois permitem manipular os dados na mem�ria do computador -
        isto pode reduzir o c�digo e melhorar o desempenho.
     */

    /* Operadores de pointers:
        & - address-of operator
        * - dereferencing operator / dereferenfia��o
    */

    //vari�veis normais:
    int qua;
    float preco = 10.50;

    printf("%.2f\n", preco); //output � o valor de preco = 10.50
    printf("%p\n\n", &preco); //usar %p para obter endere�o; output � a morada da mem�ria = 000000000061FE08

    //Definir pointers:
    int * pQua; //colocar * e um p de pointer
    float * pPreco;

    qua = 7;
    pQua = &qua;

    int age = 19; //armazena 19 na vari�vel age
    int * pAge = &age; //liga��o ao pointer

    /*
        a vari�vel age tem na mem�ria 19, e a vari�vel pAge tem na mem�ria 18826 (por exemplo) que � a morada de age,
        enquanto que a morada de pAge pode ser por exemplo 20886.
        A vari�vel pAge aponta para age se pAge armazena o endere�o de age.
     */

    /*
        Quando ligamos um pointer a uma vari�vel, podemos trabalhar com o que tem
        na mem�ria da vari�vel ao dereferenciar o pointer.
        Podemos alterar a age assim:
     */

     age = 25;
     printf("%d\n", age); //output � 25

     *pAge = 25;
     printf("%d\n", *pAge); //output � 25, logo armazena 25 onde aponta, que � para a mem�ria do age. => dereferenciar
     printf("%d\n\n", pAge); //isto d� o endere�o de mem�ria de pAge que � 6422024.


     //Pointers e Arrays

     int myNumbers[5] = {0, 25, 50, 75, 100};
     int *ptr = myNumbers; //liga��o ao pointer
     int i;

     for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i)); //dereferenciar, e somar + i para print todos os elementos do array
     } //output � 0 25 50 75 100

     //podemos mudar os elementos assim:
     myNumbers[0] = 1;
     printf("\n%d\n", myNumbers[0]);

     //ou com pointers assim:
     *(myNumbers + 1) = 26;
     printf("%d\n", *(myNumbers + 1)); //mostra o segundo elemento, se for +2 mostra o terceiro elemento, etc


    return 0;
}
