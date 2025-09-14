#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;      // even numbers
        denominator += 4;    // increases by 4 each time
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
