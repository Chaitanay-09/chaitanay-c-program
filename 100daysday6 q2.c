#include <stdio.h>
int main() {
    int n;
    printf("enter a integer: ");
    scanf("%d",&n);
    
    if(n > 0){
        printf("integer is positive ");
    }
    else if(n < 0){
        printf("integer is negative ");
    }
    else if(n == 0){
        printf("integer is zero ");
    }
    
    return 0;
}