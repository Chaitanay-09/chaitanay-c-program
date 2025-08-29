#include <stdio.h>
int main() {
    int totaltime,hours,minutes,seconds;
    printf("enter time in seconds: ");
    scanf("%d",&totaltime);
    
    hours = totaltime/3600;
    minutes = (totaltime % 3600) / 60;
    seconds = totaltime % 60;
    printf("time is: %d hours, %d minutes, %d seconds\n",hours,minutes,seconds);
    
    return 0;
}