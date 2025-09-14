#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check Armstrong
    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
