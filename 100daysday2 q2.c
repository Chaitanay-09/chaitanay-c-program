#include <stdio.h>

int main() {
    int radius,area,circumference;
    printf("enter radius of circle: ");
    scanf("%d",&radius);
    
    area=(22*radius)/7;
    printf("area of circle is :%d\n",area);
    circumference=(2*22*radius)/7;
    printf("circumference of circle is :%d\n",circumference);
    

    return 0;
}