#include <stdio.h>

long long FACT(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long BINOMIAL(int n, int r) {
    return FACT(n) / (FACT(r) * FACT(n - r));
}

int main() {
    int n, r;

    printf("Enter the maximum value of n: ");
    scanf("%d", &n);

    printf("\nBINOMIAL COEFFICIENT TABLE (C(n, r) = n! / (r! * (n - r)!))\n");
    printf("------------------------------------------------------------\n");
    printf("   n\t   r\t   C(n, r)\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("  %3d\t  %3d\t  %10lld\n", i, j, BINOMIAL(i, j));
        }
    }

    printf("------------------------------------------------------------\n");
    printf("Table generated successfully!\n");

    return 0;
}
