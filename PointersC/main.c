#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vari�veis Pointers armazenam moradas de outras vari�veis

    /* Operadores de pointers:
        & - address-of operator
        * - dereferencing operator / dereferenfia��o
    */

    //vari�veis normais:
    int qua;
    float preco;

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
        A vari�vel pAge aponta para age se pAge armazena a localidade de age.
     */

    /*
        Quando ligamos um pointer a uma vari�vel, podemos trabalhar com o que tem
        na mem�ria da vari�vel ao dereferenciar o pointer.
        Podemos alterar a age assim:
     */

     age = 25;
     printf("%d\n", age); //output � 25

     *pAge = 25;
     printf("%d\n", *pAge); //output � 25, logo armazena 25 onde aponta, que � para a mem�ria do age.
     printf("%d\n", pAge); //isto d� a morada de pAge que � 6422024.

    return 0;
}
