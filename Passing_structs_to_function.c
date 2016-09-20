#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char title[30];
    float price;
    int pages,
        numPortas;
}BOOK;

int main(void)
{
    BOOK livro;
    write(&livro);
    print(livro);

    return 0;
}

void print(BOOK livro)
{
    printf("\n\nTitle: %s\n", livro.title);
    printf("Price: %.1f\n", livro.price);
    printf("Pages: %d", livro.pages);
}

void write(BOOK *book_func)
{
    printf("Title: ");
    gets(book_func->title );

    printf("Price: ");
    scanf("%f", &book_func->price);

    printf("Pages: ");
    scanf("%d", &book_func->pages);
}
