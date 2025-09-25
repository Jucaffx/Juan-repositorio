#include <stdio.h>
int main() {
    int n, i;
    long long t1 = 0, t2 = 1, proximo;

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");
    for(i = 1; i <= n; i++) {
        printf("%lld ", t1);
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");

    return 0;
}
