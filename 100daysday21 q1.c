#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;   // extract last digit

    // find first digit and number of digits
    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }
    first = temp;       // first digit

    // extract middle part (remove first & last digit)
    middle = (n % power) / 10;

    // construct new number
    result = last * power + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}
