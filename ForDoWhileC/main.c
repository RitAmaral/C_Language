#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    favRating = 0;
    leastRating = 10;

    do {
        printf("Quantos filmes viste este ano? ");
        scanf(" %d", &numMovies);

        if (numMovies < 1) {
            printf("Não viste nenhum filme este ano, por isso não podes fazer ranking.. \nTenta novamente!\n");
        }
    } while (numMovies < 1);

    for (ctr = 1; ctr <= numMovies; ctr++)
        {
            printf("\nDiz o nome do filme (só uma palavra): ");
            scanf(" %s", movieName); //scanf só consegue perceber sem espaços
            printf("Qual o teu rating de 1-10? ");
            scanf(" %d", &rating);

            //se o rating dado for maior que o favRating (que é 0), vamos colocar o movieName no favorite.
            if (rating > favRating)
            {
                strcpy(favorite, movieName);
                favRating = rating; //agora colocamos o rating que demos no favRating
            }
            //o mesmo que em cima mas para o pior filme
            if (rating < leastRating)
            {
                strcpy(least, movieName);
                leastRating = rating;
            }
        }

    printf("\nO teu filme favorito foi %s.\n", favorite);
    printf("\nO teu pior filme foi %s.\n", least);

    //------------------------------------------------------------------------

    //strcat - concatenação
    char first[25] = "Katniss";
    char last[25] = " Everdeen";
    strcat(first, last); //Adds last to the end of first
    printf("\nEu sou a %s.\n", first);

    //------------------------------------------------------------------------

    //Ordenar arrays - incluir em cima: include <time.h>
    int ctr1, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    srand(time(&t)); //incluir sempre para o programa não gerar sempre os mesmos 10 números

    for (ctr1 = 0; ctr1 < 10; ctr1++)
    {
        nums[ctr1] = (rand() % 99) + 1; //preencher o array com números de 1 a 100
    }

    //Antes de ordenar array:
    puts("\nA lista antes de ser ordenada:");
    for (ctr1 = 0; ctr1 < 10; ctr1++)
    {
        printf("%d\n", nums[ctr1]);
    }

    //Ordenar array:
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; //Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    puts("\nArray ordenado:");
    for (ctr1 = 0; ctr1 < 10; ctr1++)
    {
        printf("%d\n", nums[ctr1]);
    }

    return 0;
}
