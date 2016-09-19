#include <stdio.h>
#include <stdlib.h>

// This program shows the use of double pointer (aka pointer to pointer)

int main()
{
    int num = 42;
    int aux = 50;
    int *ptr = &num;  // take the address of num
    int **pptr = &ptr; // take the address of ptr

    printf("\nnum: %d | &num: %x", num, &num);
    printf("\naux: %d | &aux: %x", aux, &aux);
    printf("\n*ptr: %d | ptr: %x | &ptr: %x", *ptr, ptr, &ptr);
    printf("\n**pptr: %d | *pptr: %x | pptr: %x | &pptr: %x", **pptr, *pptr, pptr, &pptr);

    printf("\n\n Now the ptr will point to aux variable");
    *pptr = &aux;  // now the ptr take the address of aux
    **pptr = 60;   // change the value of the aux variable

    printf("\n\nnnum: %d | &num: %x", num, &num);
    printf("\naux: %d | &aux: %x", aux, &aux);
    printf("\n*ptr: %d | ptr: %x | &ptr: %x", *ptr, ptr, &ptr);
    printf("\n**pptr: %d | *pptr: %x | pptr: %x | &pptr: %x", **pptr, *pptr, pptr, &pptr);


    return 0;
}
