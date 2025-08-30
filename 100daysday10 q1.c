#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter lengths of triangle: ");
    scanf("%d""%d""%d",&a,&b,&c);
    
    if(a == b == c){
        printf("equilateral triangle ");
    }
    else if(a == b && a!= c ||a !=b && a== c||a !=c && c==b){
        printf("isosceles triangle ");
    }
    else{
        printf("scalene triangle ");
    }
    
    return 0;
}