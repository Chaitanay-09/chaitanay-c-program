#include <stdio.h>

int main() {
    int n,sum;
    printf("enter numbers till where you wnat to find sum: ");
    scanf("%d",&n);
    
    sum = (n*(n+1))/2;
    printf("sum of inputed number: %d\n",sum);
    return 0;
}