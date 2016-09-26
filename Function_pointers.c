#include <stdio.h>
#include <stdlib.h>

int sum(int c, int d);
int (*pont_func)(int a, int b);

int main()
{
    pont_func = &sum;
    (*pont_func)(4,5);

    return 0;
}

int (*pont_func)(int a, int b);

int sum(int c, int d){
    int e = c + d;

    return (printf("%d", e));
}
