#include <stdio.h>
#include <string.h>
#include <cc50.h>
#include <stdlib.h>

int main(void)
{
    char teste[20];
    printf("Digite o número do seu cartão de crédito:");
    long long cartao = GetLongLong();
    printf("O seu cartão tem esse número %lld\n", cartao);
    sprintf(teste, "%lld", cartao);
    // prinf("%s", teste);
    for (size_t i = 0; i < strlen(teste); i += 2)
    {
        printf("%s", teste);
    }

    return 0;
}