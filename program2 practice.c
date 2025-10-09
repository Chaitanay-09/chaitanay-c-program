#include <stdio.h>


int globalVar = 10;


void showLocal() {
    int localVar = 5;  
    printf("Inside showLocal(): localVar = %d\n", localVar);
    printf("Inside showLocal(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    showLocal();  

    
    
    printf("Inside main() again: globalVar = %d\n", globalVar);

    return 0;
}
