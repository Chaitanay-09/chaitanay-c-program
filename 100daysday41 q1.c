#include <stdio.h>
int main(){
    
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    
    while ((str[i] = getchar()) != '\n' && i < 99){
        i++;
    }    
    str[i] = '\0';
    printf("Length of the string: %d\n", i);
    
    return 0;
}