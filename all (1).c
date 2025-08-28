#include <stdio.h>
int main() {
    int x,y,sum,difference,product,quotient;
    printf("enter first number: ");
    scanf("%d",&x);
    printf("enter second number: ");
    scanf("%d",&y);
    
    sum = x + y;
    difference = x - y;
    product= x*y;
    quotient= x/y;
    printf("sum: %d, difference: %d, product: %d, quotient: %d\n", sum,difference,product,quotient);
     
     return 0;
}     