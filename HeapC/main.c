#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Heap - the collection of unused memory in the computer

    //este programa tem um array de tamanho (aSize) preenchido entre 500 numeros aleatórios armazendos na heap,
    //e vai ver qual o maior, o menor, a média e o total desses números.

    int i, aSize;
    int * randomNums;

    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &aSize);

    //Allocate an array of integers equal to the number of elements requested by the user
    randomNums = (int *) malloc(aSize * sizeof(int)); //aloca o nº que o user inseriu na heap
    //typecast para int, pq se não pensa que é char e vai dar erro
    //multiplicar por sizeof(int) para podermos resguardar ou alocar memória suficiente seguida na heap

    //Testar se há memória suficiente na heap para armazenar o array
    if (!randomNums) //pode ser !randomNums (diferente de true) ou randomNums == 0
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

    //Loops through the array and assigns a random number between 1 and 500 to each element
    for(i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    // Initialize the biggest and smallest number for comparison's sake
    biggest = 0;
    smallest = 500;

    // Loop through the now-filled array testing for the random numbers that
    // are biggest, smallest, and adding all numbers together to calculate an average

    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total)/((float)aSize);
    printf("The biggest random number is %d.\n", biggest);
    printf("The smallest random number is %d.\n", smallest);
    printf("The average of the random numbers is %.2f.\n", average);

    // When you use malloc, remember to then use free
    free(randomNums); //Gives the memory back to the heap

    /* Um run do programa deu o seguinte output:
        How many random numbers do you want in your array? 40
        The biggest random number is 483.
        The smallest random number is 9.
        The average of the random numbers is 230.70.
    */

    return 0;
}
