#include <stdio.h>
int main() {
    int latedays,fine;
    printf("enter no. of days of late submission: ");
    scanf("%d",&latedays);
    
    if(latedays <= 0){
        printf("no fine returned on time \n");
    }
    else if(latedays <= 5){
        fine = latedays*2;
        printf("fine on late is %d\n",fine);
    }
    else if(latedays <=10){
        fine = latedays*4;
        printf("fine on late is %d\n",fine);
    }
    else if(latedays >=11 && latedays <=30){
        fine = latedays*6;   
        printf("fine on late is %d\n",fine);
    }
    else{
        printf("invalid");
    }

    return 0;
}