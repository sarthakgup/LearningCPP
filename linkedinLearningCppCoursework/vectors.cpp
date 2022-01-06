//
// Created by test on 1/5/2022.
// practicing using the cpp data structure called vectors
//

//Notes:
//  - vectors are better to use than array since they're dynamic mem
//  - part of the C++ Standard Template Library

#include <vector>       //NEED TO INCLUDE VECTOR HEADER TO USE VECTORS

#include <iostream>
#include <string>
//#include "cow.h"          //this cow.h was used as part of an example

using namespace std;

vector<int> primes;

int main()
{
    //adding elements to vector:
    primes.push_back(1);
    primes.push_back(2);

    //removing element from vector:
    primes.pop_back();

    // why does line below work with and would the 'endl' ??????
    cout << "The vector has " << primes.size() << " elements. " << primes[0] << endl;

    return 0;
}


