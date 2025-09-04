#include <stdio.h>

int main() {
    int v,n,p=0,neg=0,zero=0;
    while(1){
        printf("do you want to enter,please enter 1 for yes and 0 for no");
        scanf("%d",&v);
    if(v==1){
        printf("enter number: ");
        scanf("%d",&n);
        
        if(n>0)
           p++;
        else if(n<0)
           neg++;
        else
           zero++;
    }
    else if (v == 0) {
        break;
    }
    else {
        printf("you have entered wrong choice");
    }    
    }
    printf("\ncount of pos numbers = %d\n",p);
    printf("count of neg numbers = %d\n",neg );
    printf("count of zeros = %d\n",zero);
    
    return 0;
}