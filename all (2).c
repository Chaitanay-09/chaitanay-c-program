#include <stdio.h>
int main() {
    int length,breadth,area,perimeter;
    printf("enter length: ");
    scanf("%d",&length);
    printf("enter breadth: ");
    scanf("%d",&breadth);
    
    area=length * breadth;
    printf("area of rectangle:%d\n ",area);
    perimeter= 2*(length+breadth);
    printf("perimeter of rectangle:%d\n ",perimeter);
    
    return 0;
}