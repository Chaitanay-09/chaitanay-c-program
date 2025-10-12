#include <stdio.h>

void FIBO(int num) {
    int first = 0, second = 1, next;

    printf("Fibonacci sequence up to %d terms:\n", num);

    // Handle special cases
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    } else if (num == 1) {
        printf("%d\n", first);
        return;
    }

    printf("%d %d ", first, second);

    for (int i = 3; i <= num; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    FIBO(n);

    return 0;
}
