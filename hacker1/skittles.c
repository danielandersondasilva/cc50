#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cc50.h>

int main(void)
{
    srand(time(NULL));
    int skittles = rand() % 1024;
    printf("Olá! Eu sou uma máquina de balas falante! Adivinhe quantas balas têm dentro de mim. Dita: é algo entre 0 e 1023.\n");
    int chute;
    chute = 1025;
    while (skittles != chute)
    {
        printf("Digite um número: ");
        chute = GetInt();
        if (chute > skittles)
        {
            printf("Tente um número menor\n");
        }
        else if (chute < skittles)
        {
            printf("Haha! Tenho mais balas que isso!\n");
        }
        else
        {
            printf("Parabéns vc acertou!\n");
            break;
        }
    }

    return 0;
}