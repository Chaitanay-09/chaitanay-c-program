#include <stdio.h>
int main() {
    char alpha,upperalpha,loweralpha,digit,special;
    printf("enter a word: ");
    scanf("%c",&alpha);
    
    if(alpha >= 'A' && alpha<= 'Z'){
        printf("alpha is upperalpha %c\n",upperalpha);
    }
    else if(alpha >= 'a' && alpha<= 'z'){
        printf("alpha is loweralpha %c\n",loweralpha);
    }
    else if(alpha >= 0 && alpha<= 9){
        printf("alpha is digit %c\n",digit);
    }
    else{
        printf("alpha is special %c\n",special);
    }
    
    return 0;
}