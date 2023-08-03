#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n\n"); //printf imprime Hello world! na consola

    //variáveis
    char nome[] = "Rita"; // temos de colocar [] porque queremos colocar vários caracteres; string entre ", e uma letra entre '
    int idade = 27;

    printf("My name is %s, and I'm %d years old.\n", nome, idade); //o %s vai buscar char, mas temos de colocar o nome da variável à frente.
    // o %d vai buscar os int.

    //outros tipos de dados:
    double numero = 19.02; //%f vai buscar floating points/números decimais
    char letra = 'A'; // %c vai buscar chars
    letra = 'R'; //overwrite a variável letra

    printf("This is a %s: %f, and this is a char: %c.\n", "floating point or real number", numero, letra);

    printf("Floating points like: %.2f usually takes twice as much memory as an integer like: %d.\n", numero, idade);
    // %.2f mostra o número decimal com duas casas decimais

    /* Tamanho que ocupam os tipos de dados:
        int: 2 a 4 bytes
        float: 4 bytes
        double: 8 bytes
        char: 1 byte
    */

    /* Format Specifiers:
        %c vai buscar char
        %s vai buscar string
        %d ou %i vai buscar int
        %f vai buscar float/double
    */


    //Escape sequences
    printf("\nEscape sequence \n = nova linha \n");
    printf("Escape sequence \t = um tab \n");
    printf("Escape sequence \a = um alert e emitido quando executado o programa \n");
    printf("Escape sequence \\ = insere a barra \\ \n");
    printf("Escape sequence \' = insere pelicas \n");
    printf("Escape sequence \" = insere aspas \n\n");


    //Somar variáveis
    int x = 2, y = 5; //declarar variáveis do mesmo tipo na mesma linha
    int soma = x + y;
    printf("A soma de %d + %i e = %i \n\n", x, y, soma);


    //Conversão int double
    int num1 = 5;
    int num2 = 2;
    float divisao1 = num1 / num2; //output é 2.000000

    printf("%f \n",divisao1);

    int num3 = 5;
    int num4 = 2;
    float divisao2 = (float) num3 / num4; //colocar (float)

    printf("%f \n", divisao2); //output é 2.500000
    printf("%.2f \n\n", divisao2); //output é 2.50


    printf("\n");
    //return 0 = termina a função main()
    return 0;
}
