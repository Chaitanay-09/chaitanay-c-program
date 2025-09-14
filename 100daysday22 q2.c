#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1, denominator = 2;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
