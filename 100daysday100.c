#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s1;          
    struct Student *ptr;        

    ptr = &s1;

    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    // display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
