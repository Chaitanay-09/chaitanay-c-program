#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++) {  // divisors are at most n/2
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n != 0)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
