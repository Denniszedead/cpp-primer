#include <iostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

int* returnPointer() {
    // can add static variable (not best swe practice)
    int a = 3;
    return &a;
}

void unsafe() {
    // Unsafe as if function is done, stack frame is removed, and a points to the memory that should not be accessed.
    int* a = returnPointer();
    *a = 4;
    std::cout << "Value of a: " << *a;
}

int main() {
    unsafe();
    return 0;
}
