#include <stdio.h>

int main() {
    int x;
    printf("enter a integer: ");
    scanf("%d",&x);
    
    if(x%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    
    return 0;
}