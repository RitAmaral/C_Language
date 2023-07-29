#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n"); //printf imprime Hello world! na consola

    //variáveis
    char nome[] = "Rita"; // temos de colocar [] porque queremos colocar vários caracteres
    int idade = 27;

    printf("My name is %s, and I'm %d years old.\n", nome, idade); //o %s vai buscar char, mas temos de colocar o nome da variável à frente.
    // o %d vai buscar os int.

    //outros tipos de dados:
    double numero = 19.02; //%f vai buscar
    char letra = 'A';

    printf("My favorite %s is %f, and my favorite letter is %c.\n", "number", numero, letra);

    return 0;
}
