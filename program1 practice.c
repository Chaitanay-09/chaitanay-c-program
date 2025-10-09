#include <stdio.h>

int counter = 0;

void increment() {
    counter++;
    printf("Counter after increment: %d\n", counter);
}

void decrement() {
    counter--;
    printf("Counter after decrement: %d\n", counter);
}

void display() {
    printf("Current counter value: %d\n", counter);
}

int main() {
    printf("Initial counter value: %d\n", counter);

    increment();  
    increment();  
    decrement(); 
    display();     

    return 0;
}
