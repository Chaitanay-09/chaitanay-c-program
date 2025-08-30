#include <stdio.h>
int main() {
    char alphabet;
    printf("enter a alphabet: ");
    scanf("%c",&alphabet);
    
    if(alphabet == 'a' || alphabet == 'e'|| alphabet == 'i'|| alphabet == 'o'|| alphabet == 'u'|| alphabet == 'A'|| alphabet == 'E'|| alphabet == 'I'|| alphabet == 'O'|| alphabet == 'U'){
        printf("character is vowel %c\n",alphabet);
    }
    else{
        printf("character is consonant");
    }

    return 0;
}