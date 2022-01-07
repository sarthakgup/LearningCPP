#include <iostream>

// Sarthak Gupta

#include <stdio.h>

typedef struct student
{
    char id [4];
    int year;
    double gpa;
} student;


int main() {
    typedef struct className
    {
        double n;
        student students[10];
    };

    printf("%lu, %lu\n", sizeof (struct student), sizeof (struct className));
    return 0;
}
