#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    
        for(i=1;i <= 2*n;i += 2)
        sum += i;
        printf("sum of %d odd numbers is %d\n",n,sum);

    return 0;
}

