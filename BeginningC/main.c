#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n"); //printf imprime Hello world! na consola

    //vari�veis
    char nome[] = "Rita"; // temos de colocar [] porque queremos colocar v�rios caracteres; string entre ", e uma letra entre '
    int idade = 27;

    printf("My name is %s, and I'm %d years old.\n", nome, idade); //o %s vai buscar char, mas temos de colocar o nome da vari�vel � frente.
    // o %d vai buscar os int.

    //outros tipos de dados:
    double numero = 19.02; //%f vai buscar floating points/n�meros decimais
    char letra = 'A'; // %c vai buscar chars

    printf("This is a %s: %f, and this is a char: %c.\n", "floating point or real number", numero, letra);

    printf("Floating points like: %.2f usually takes twice as much memory as an integer like: %d.\n", numero, idade);
    // %.2f mostra o n�mero decimal com duas casas decimais

    return 0;
}
