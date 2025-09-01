]#include <stdio.h>
int main() {
    int bill,units;
    printf("enter no. of units consumed: ");
    scanf("%d",&units);
    
    if(units <=50){
        bill = units*5;
        printf("total bill is  %d\n",bill);
    }
    else if(units <=150){
        bill = units*7;
        printf("total bill is  %d\n",bill);
    }
    else if(units <=250){
        bill = units*9;   
        printf("total bill is  %d\n",bill);
    }
    else{
        bill = units*10;
        printf("total bill is  %d\n",bill);
    }

    return 0;
}