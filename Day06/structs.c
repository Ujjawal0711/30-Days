#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Alice");
    s1.gpa = 3.8;

    printf("Student: %s (ID: %d) - GPA: %.2f\n", s1.name, s1.id, s1.gpa);
    return 0;
}
