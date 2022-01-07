//
// Created by test on 1/6/2022.
//

#include <iostream>
#include "testfoo.h"

int foo(int x)
{
    bar(2);
    return x;

}

int main()
{
    foo(1);


    return 0;
}



void bar(int y)
{
    printf("bar");
    foo(2);
}






