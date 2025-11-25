#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];  
}

int main() {
    int n, i;
    struct Student s[100];
    struct Student top;

    // Read number of students
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Get top student
    top = getTopStudent(s, n);

    // Print top student's details
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
