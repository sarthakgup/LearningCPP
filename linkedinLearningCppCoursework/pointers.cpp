//
// Created by test on 1/5/2022.
//

#include <iostream>
#include <cstdio>

int main() {
    int x = 7;      //storing value 7 in memory named x
    int *ip = &x;
    int y = *ip;

    printf("val: %d\n", x);     //prints 7
    printf("val: %d\n", *ip);   //prints 7

    printf("val: %d\n", &x);    //prints address: 6422212
    printf("val: %d\n", &ip);    //prints address: 6422212

    return 0;
}

