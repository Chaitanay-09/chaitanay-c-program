#include <stdio.h>
int main() {
    int arr[100];
    int i,n,num,freq= 0;
    
    printf("enter number of elements in array(max 100): ");
    scanf("%d",&n);
    
    if(n<1 || n>100)
         {
             printf("please enter a valid number of elements between 1 and 100.\n");
             return 0;
         } 
    printf("enter%d integers:\n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("enter number to find it frequency: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
         {
             if(arr[i] == num)
                     {
                         freq++;
                     }
         }
    printf("the number %d appears %d time in array.\n",num,freq);   
    return 0;
}