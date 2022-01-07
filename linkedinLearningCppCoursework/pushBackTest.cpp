//
// Created by test on 1/6/2022.
//

#include <vector>       //NEED TO INCLUDE VECTOR HEADER TO USE VECTORS

#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(int x, int y) : x_(x), y_(y) {
        std::cout << "Create class" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destroy class" << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& my_class) {
        std::cout << "Copy Constructor Called" << std::endl;
        x_ = my_class.x_;
    }

    // Move Constructor
    MyClass (MyClass&& my_class) noexcept {
        std::cout << "Move Constructor Called" << std::endl;
        x_ = std::move(my_class.x_);
    }

private:
    int x_ = 0;
    int y_ = 0;
};

int main()
{
    MyClass* x = new MyClass(1, 2);     //new always allocates from heap
    std::vector<MyClass*> myClasses;
    delete(x);


    myClasses.push_back(x);
    printf("hi %d\n", myClasses[0]);

    MyClass y(1,2);


    return 0;
}