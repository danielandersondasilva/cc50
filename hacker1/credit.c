#include <stdio.h>
#include <cc50.h>

int main(void)
{
    printf("Digite o número do seu cartão de crédito:");
    long long cartao = GetLongLong();
    printf("O seu cartão tem esse número %lld\n", cartao);

    return 0;
}