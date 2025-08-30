#include <stdio.h>
int main() {
    float marks,grade,A,B,C,F;
    printf("enter marks: ");
    scanf("%f",&marks);
    
    if(marks >=85){
        printf("grade: A\n");
    }
    else if (marks >=70){
        printf("grade: B\n");
    }
    else if(marks >=60){
        printf("grade: C\n");
    }
    else{
        printf("grade: F\n");
    }
    return 0;
}