#include <iostream>

//
// Created by Ng Wen Hao Dennis on 4/9/23.
//

void references() {
    int a  = 10;

    //&: Get memory location of a
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << std::endl;

    //&: Creating an alias for a
    int &b = a; // Reference
    std::cout << "Address of b: " << &b << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    std::cout << std::endl;

    // &: Address of a
    // *: Declare as pointer
    int* c = &a; // Pointer - store addresses
    std::cout << "Address of c: " << &c << std::endl;
    std::cout << "Value of c: " << c << std::endl;
    // *: Dereference
    std::cout << "Value of variable pointed by c: " << *c << std::endl;
    std::cout << std::endl;
}

int main() {
    references();
}
