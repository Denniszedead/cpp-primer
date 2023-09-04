#include <iostream>
#include <ostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//
void switches() {
    switch (1) {
        case 1:
            // Not allowed by c++
            //int a = 2;
            std::cout << "case 1" << std::endl;
            break;
        case 2: {
            int b = 0;
            std::cout << "case 2" << std::endl;
            break;
        }
    }
}

int main() {
    switches();
    return 0;
}
