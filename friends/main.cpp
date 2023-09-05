#include <iostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

class Dog {
    friend class DogDB;
private:
    int id;
public:
    Dog(int i) : id(i) {}
};

class DogDB {
public:
    void printId(std::shared_ptr<Dog> dog) {
        std::cout << "The ID is " << dog->id << std::endl;
    }
};

void friends() {
    DogDB db;
    db.printId(std::make_shared<Dog>(100));
}

int main() {
    friends();
    return 0;
}
