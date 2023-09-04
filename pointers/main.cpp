#include <iostream>

//
// Created by Ng Wen Hao Dennis on 4/9/23.
//

class Cat {
public: // Set this as public
    int id;

    Cat(int i) : id(i) {};

    bool operator==(const Cat &other) const {
        return id == other.id;
    }
};

void pointers() {
    // By adding new, it will make the object dynamically allocated.
    // new Returns the address of the object
    Cat* c = new Cat(0);

    std::vector<Cat> cats;
    for (int i = 0; i < 3; i++) {
        cats.push_back(Cat(i));
    }

    // Iterator are pointers
    for (auto itr = cats.begin(); itr != cats.end(); itr++) {
        std::cout << "Cat " << (*itr).id << std::endl;
        std::cout << "Cat " << itr->id << std::endl;
    }

    std::vector<Cat*>* catPointers = new std::vector<Cat*>();
    for (int i = 0; i < 3; i++) {
        catPointers->push_back(new Cat(i));
    }

    for (auto itr = catPointers->begin(); itr != catPointers->end(); itr++) {
        std::cout << "Cat " << (*itr)->id << std::endl;
    }
}

int main() {
    pointers();
}
