#include <stdio.h>

int main() {
    int celsius,fahrenheit;
    printf("enter temperature in celsius: ");
    scanf("%d", &celsius);
    fahrenheit=9*celsius/5 + 32;
    printf("temperature in fahrenheit is: %d\n",fahrenheit);
    
    return 0;
}