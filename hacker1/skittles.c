#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cc50.h>

int main(void)
{
    srand(time(NULL));
    int skittles = rand() % 1024;
    printf("%d\n", skittles);

    printf("Digite um número: ");
    int n = GetInt();
    printf("%d", n);
    return 0;
}