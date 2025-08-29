#include <stdio.h>

int main() {
    int a,b;
    printf("enter one number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after swapping: a=%d,b=%d\n",a,b);
    
    return 0;
}