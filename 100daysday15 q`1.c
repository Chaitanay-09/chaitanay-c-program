#include <stdio.h>
int main() {
    int n,i,fact=1;
    printf("enter number: ");
    scanf("%d",&n);

    if(n < 0){
        printf("factorial is not defined \n");
    }else{
        for(i=1; i<=n; i++){
            fact *= i;
        }
        printf("factorial of %d = %d\n",n,fact);
    }
    

    return 0;
}