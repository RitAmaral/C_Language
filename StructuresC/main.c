#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ------------------- Structures --------------------------- */

    //este struct contém informação sobre um livro
    struct bookInfo {
        char title[40];
        char author[25];
        float price;
        int pages;
    };

    int i;
    struct bookInfo books[3]; //array de 3 variáveis struct


    //pedir informação sobre os 3 livros ao user:
    for (i = 0; i < 3; i++) {
        printf("Qual o nome do livro #%d?\n", (i+1));
        gets(books[i].title);
        puts("Nome do autor? ");
        gets(books[i].author);
        puts("Quanto custou o livro? ");
        scanf(" %f", &books[i].price);
        puts("Quantas paginas tem o livro? ");
        scanf(" %d", &books[i].pages);
        getchar(); //Clears last newline for next loop
    }


    //mostra informação recebida pelo user:
    printf("Informacao dos livros:\n");

    for (i = 0; i < 3; i++) {
        printf("#%d: \"%s\", por %s",
               (i+1), books[i].title, books[i].author);
        printf("\nCustou $%.2f, e tem %d paginas", books[i].price, books[i].pages);
        printf("\n\n");
    }

    return 0;
}
