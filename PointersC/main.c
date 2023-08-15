#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis Pointers armazenam moradas de outras variáveis

    /* Operadores de pointers:
        & - address-of operator
        * - dereferencing operator / dereferenfiação
    */

    //variáveis normais:
    int qua;
    float preco;

    //Definir pointers:
    int * pQua; //colocar * e um p de pointer
    float * pPreco;

    qua = 7;
    pQua = &qua;

    int age = 19; //armazena 19 na variável age
    int * pAge = &age; //ligação ao pointer

    /*
        a variável age tem na memória 19, e a variável pAge tem na memória 18826 (por exemplo) que é a morada de age,
        enquanto que a morada de pAge pode ser por exemplo 20886.
        A variável pAge aponta para age se pAge armazena a localidade de age.
     */

    /*
        Quando ligamos um pointer a uma variável, podemos trabalhar com o que tem
        na memória da variável ao dereferenciar o pointer.
        Podemos alterar a age assim:
     */

     age = 25;
     printf("%d\n", age); //output é 25

     *pAge = 25;
     printf("%d\n", *pAge); //output é 25, logo armazena 25 onde aponta, que é para a memória do age.
     printf("%d\n", pAge); //isto dá a morada de pAge que é 6422024.

    return 0;
}
