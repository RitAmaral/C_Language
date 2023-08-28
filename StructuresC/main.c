#include <stdio.h>
#include <stdlib.h>
FILE * fptr; //define um file pointer chamado fptr

int main()
{
    /* ------------------- Structures e Files --------------------------- */

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
        fgets(books[i].title, sizeof(books[i].title), stdin);
        puts("Nome do autor? ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        puts("Quanto custou o livro? ");
        scanf(" %f", &books[i].price);
        puts("Quantas paginas tem o livro? ");
        scanf(" %d", &books[i].pages);
        getchar(); //Limpa a última quebra de linha para o próximo loop
    }

    //conectar o pointer ao ficheiro com fopen()
    //escrever o caminho do ficheiro, colocar duas barras // em vez de uma
    //w = modo escrever/write - cria um novo ficheiro quer ele exista ou não
    //r = modo leitura que permite ler um ficheiro existente, se o ficheiro não existe, dá erro
    //a = append mode, que deixa adicionar ao fim do ficheiro ou criar ficheiro caso não exista
    fptr = fopen("C:\\Users\\Utilizador\\Documents\\Software Developer\\C_Language\\StructuresC\\InfoLivros.txt","w");

    //ver se o ficheiro abriu
    if(fptr == 0) {
        printf("Erro -- ficheiro nao foi aberto.");
        exit (1);
    }

     //mostra informação recebida pelo user, e coloca-a no ficheiro
    fprintf(fptr, "\nInformacao dos livros:\n"); //usar fprint para escrever no ficheiro

    for (i = 0; i < 3; i++) {
        fprintf(fptr, "#%d: \"%s\", por %s",
               (i+1), books[i].title, books[i].author);
        fprintf(fptr, "\nCustou $%.2f, e tem %d paginas", books[i].price, books[i].pages);
        fprintf(fptr, "\n\n");
    }

    fclose(fptr); //fechar sempre que abro um ficheiro

    return 0;
}
