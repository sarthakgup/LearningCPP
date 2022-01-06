//
// Created by test on 1/5/2022.
// Playing around with switches in cpp
//

#include <iostream>
#include <cstdio>

int main() {
    const int caseOne = 1;
    const int caseTwo = 2;
    const int caseThree = 3;
    const int caseFour = 4;


    int switchCase = 3;

    switch(switchCase)
    {
        case(caseOne):
            printf("one");
            break;

        case(caseTwo):
            printf("two");
            break;

        case(caseThree):
            printf("three\n");
            puts("testing puts");
            std::cout << "hi" << std::endl;     //testing cout class from cpp std library
            break;

        case(caseFour):
            printf("four");
            break;

        default:
            printf("default");
            break;
    }
}
