#include <stdio.h>
int main() {
    int n,i;
    printf("enter number till where where you want output: ");
    scanf("%d",&n);
    
    printf("numbers from 1 to %d are: \n", n);
    for(i = 1; i <= n; i++) {
        printf("%d",i);
    }
    printf("\n");
    return 0;
}