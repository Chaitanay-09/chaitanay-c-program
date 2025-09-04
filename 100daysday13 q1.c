#include <stdio.h>

int main() {
    int num1,num2,result;
    char op;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);
    printf("enter an operator(+,-,*,/,%): ");
    scanf(" %c",&op);
    
    switch(op) {
        case '+':
            result = num1+num2;
            printf("result: %d\n",result);
            break;
        case '-':
            result = num1-num2;
            printf("result: %d\n",result);
            break;
         case '*':
            result = num1*num2;
            printf("result: %d\n",result);
            break;
         case '/':
             if(num2!=0){
                 result = num1/num2; 
                 printf("result: %d\n",result);
             }else{ 
                 printf("error: divison by zero is not allowed!\n");
             }     
            break; 
         case '%':
             if(num2!=0){
                 result = num1%num2;
                 printf("result: %d\n",result);
             }else{
                 printf("error: modulus by zero is not allowed!\n");
             }     
             break;
         default:
             printf("invalid operator");
        }

    return 0;
}