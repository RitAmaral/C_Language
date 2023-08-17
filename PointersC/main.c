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
    float preco = 10.50;

    printf("%.2f\n", preco); //output é o valor de preco = 10.50
    printf("%p\n\n", &preco); //output é a morada da memória = 000000000061FE08

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
     printf("%d\n", *pAge); //output é 25, logo armazena 25 onde aponta, que é para a memória do age. => dereferenciar
     printf("%d\n\n", pAge); //isto dá a morada de pAge que é 6422024.


     //Pointers e Arrays

     int myNumbers[5] = {0, 25, 50, 75, 100};
     int *ptr = myNumbers; //ligação ao pointer
     int i;

     for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i)); //dereferenciar, e somar + i para print todos os elementos do array
     } //output é 0 25 50 75 100

     //podemos mudar os elementos assim:
     myNumbers[0] = 1;
     printf("\n%d\n", myNumbers[0]);

     //ou com pointers assim:
     *(myNumbers + 1) = 26;
     printf("%d\n", *(myNumbers + 1));


    return 0;
}
