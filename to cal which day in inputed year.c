#include <stdio.h>
int main() {
    int y,year,l=0,days=0;
    int day_index;
    
    printf("enter the year");
    scanf("%d",&year);
    
    for(y=1;y<year;y++){
        l=(y%4==0 && y%100 !=0) || (y%400 == 0);days += (l ? 366 : 365);
    }
    day_index = days%7;
    switch(day_index) {
        case 0:
          printf("1st jan of year %d is sunday \n",year);
          break;
        case 1:
          printf("1st jan of year %d is monday \n",year);
          break;
        case 2:
          printf("1st jan of year %d is tuesday \n",year);
          break;
        case 3:
          printf("1st jan of year %d is wednesday \n",year);
          break; 
        case 4:
          printf("1st jan of year %d is thursday \n",year);
          break;
        case 5:
        printf("1st jan of year %d is friday \n",year);
        break;
        case 6:
          printf("1st jan of year %d is saturday \n",year);
          break;    
    }

    return 0;
}