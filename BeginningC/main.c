#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Hello world!\n\n"); //printf imprime Hello world! na consola

    //vari�veis
    char nome[] = "Rita"; // temos de colocar [] porque queremos colocar v�rios caracteres; string entre ", e uma letra entre '
    int idade = 27;

    printf("My name is %s, and I'm %d years old.\n", nome, idade); //o %s vai buscar char, mas temos de colocar o nome da vari�vel � frente.
    // o %d vai buscar os int.

    //outros tipos de dados:
    double numero = 19.02; //%f vai buscar floating points/n�meros decimais
    char letra = 'A'; // %c vai buscar chars
    letra = 'R'; //overwrite a vari�vel letra

    printf("This is a %s: %f, and this is a char: %c.\n", "floating point or real number", numero, letra);

    printf("Floating points like: %.2f usually takes twice as much memory as an integer like: %d.\n\n", numero, idade);
    // %.2f mostra o n�mero decimal com duas casas decimais

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
    /*
    printf("\nEscape sequence \n = nova linha \n");
    printf("Escape sequence \t = um tab \n");
    printf("Escape sequence \a = um alert e emitido quando executado o programa \n");
    printf("Escape sequence \\ = insere a barra \\ \n");
    printf("Escape sequence \' = insere pelicas \n");
    printf("Escape sequence \" = insere aspas \n\n");
    */


    //Somar vari�veis
    int x = 2, y = 5; //declarar vari�veis do mesmo tipo na mesma linha
    int soma = x + y;
    printf("A soma de %d + %i e = %i \n\n", x, y, soma);


    //Convers�o int double
    int num1 = 5;
    int num2 = 2;
    float divisao1 = num1 / num2; //output � 2.000000

    printf("%f \n",divisao1);

    int num3 = 5;
    int num4 = 2;
    float divisao2 = (float) num3 / num4; //colocar (float)

    printf("%f \n", divisao2); //output � 2.500000
    printf("%.2f \n\n", divisao2); //output � 2.50

    //Constantes - quando n�o queremos que um n�mero seja alterado / read-only
    const float NUMPI = 3.14; //� boa pr�tica escrever constantes com letras mai�sculas

    printf("%.2f \n\n", NUMPI);
    //NUMPI = 5; //isto d� um erro

    //Operadores
    int sum1 = 100 + 50; //estes e casos s�o poss�veis
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;

    printf("%i \n", sum1); // 150 (100 + 50)
    printf("%i \n", sum2); // 400 (150 + 250)
    printf("%i \n\n", sum3); // 800 (400 + 400)

    /* Operadores
     +     -     *   /     %    ++x (aumenta a vari�vel +1)    --x (diminui a vari�vel -1)
     +=    -=   *=   /=
     >     <
    */

    int x1 = 5;
    int y1 = 3;
    printf("%d ", x1 > y1); // returns 1 (true) porque 5 � maior que 3
    printf("%d ", x1 < y1); // returns 0 (false) porque 3 n�o � maior que 5
    printf("%d ", x1 == y1); // returns 0 (false) porque 3 n�o � igual a 5
    printf("%d \n\n", x1 != y1); // returns 1 (true) porque 5 � diferente de 3

    //operadores l�gicos: && (e)    || (ou)     !

    //vari�veis do tipo bool, incluir l� em cima <stdbool.h>
    bool isProgrammingFun = true;
    bool isCBoring = false;

    printf("%d ", isProgrammingFun); // 1 = true, usar formato %d para imprimir a vari�vel bool
    printf("%d ", isCBoring); // 0 = false

    printf("%d \n\n", 10 > 9);  // Returns 1 (true) porque 10 � maior que 9


    //if else
    int idade1 = 27;
    int idadeConduzir = 18;

    if (idade1 >= idadeConduzir) {
        printf("Podes conduzir \n\n");
    } else {
        printf("N�o podes conduzir \n\n");
    }

    int hora = 18;
    if (hora <= 12) {
      printf("Bom dia.");
    } else if (hora <= 20) {
      printf("Boa tarde.");
    } else {
      printf("Boa noite.");
    }
    // Outputs "Boa tarde."

    //outra forma de fazer if/else:
    (hora <= 17) ? printf("Bom dia. \n\n") : printf("Boa noite. \n\n");


    //switch
    int dia = 4;

    switch (dia) {
      case 1:
        printf("Hoje � s�bado");
        break;
      case 2:
        printf("Hoje � domingo");
        break;
      default:
        printf("Quase fim-de-semana!");
    } // Outputs "Quase fim-de-semana!"




    printf("\n");
    //return 0 = termina a fun��o main()
    return 0;
}
