#include <iostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

// Forward Declaration
class Cat;

class Human {
private:
    std::shared_ptr<Cat> pet;
};

class Cat {
private:
    std::shared_ptr<Human> owner;
};

void second();

void forward() {
    second();
}

void second() {

}


int main() {
    forward();
    return 0;
}
