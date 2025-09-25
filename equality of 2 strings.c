#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i=0,flag = 0;
    
    printf("enter first string: ");
    scanf("%s",str1);
    printf("enter second string: ");
    scanf("%s",str2);
    
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
        i++;
    }
    if(str1[i] != '\0' || str2[i] != '\0'){
        flag = 1;
    }
    if(flag==0){
        printf("strings are equal.\n");
    }else{
        printf("strings are not equal.\n");
    }

    return 0;
}