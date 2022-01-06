//
// Created by test on 1/5/2022.
// testing dynamic memory functions which are available in cpp not c
//

#include <cstdio>
#include <new>

const long int count = 1024;

int main()
{
    printf("allocate space  for %lu long unsigned int at *ip with new \n", count);


    //allocate array
    long int* ip;
    ip = new(std::nothrow) long int [count];
    if(!ip)
    {
        fputs("cannot allocate memory\n", stderr);
        return 1;
    }

    //initialize array
    for(long int i = 0; i < count; i++)
    {
        ip[i] = i;
    }

    //deallocate array
    delete [] ip;
    puts("space at *ip deleted");


    return 0;
}


