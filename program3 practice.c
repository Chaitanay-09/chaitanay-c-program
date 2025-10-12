#include <stdio.h>

int main() {
    int a = 10; 
    printf("Inside main block: a = %d\n", a);

    {
        int b = 20; 
        printf("Inside first inner block: a = %d, b = %d\n", a, b);
    }

    {
        int c = 30;
        printf("Inside second inner block: a = %d, c = %d\n", a, c);
    }

    printf("Back in main block: a = %d\n", a);

    return 0;
}
