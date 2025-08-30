#include <stdio.h>
int main() {
    int x,y,z;
    printf("enter one number: ");
    scanf("%d",&x);
    printf("enter second number: ");
    scanf("%d",&y);
    printf("enter third number: ");
    scanf("%d",&z);
    
    if(x >y && x >z){
        printf("x is largest %d\n",x);
    }
    else if(x >y && x <z){
        printf("z is largest %d\n",z);
    }
    else if(x <y && x >z){
        printf("y is largest %d\n",y);
    }
    else if(x <y && y <z){
        printf("z is largest %d\n",z);
    }
    else if(z >x && z <y){
        printf("y is largest %d\n",y);
    }
    else if(y <x && x >z){
        printf("x is largest %d\n",x);
    }
    
    return 0;
}