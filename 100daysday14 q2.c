#include <stdio.h>

int main() {
    int n,i,product=1;
    printf("enter number: ");
    scanf("%d",&n);
    
    for(i=2;i <= 2*n;i+=2){
        product *= i;
    }
        printf("product of %d even  numbers is: %d\n ",n,product);

    return 0;
}