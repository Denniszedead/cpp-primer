#include <iostream>
#include <memory>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//
class Cat {
public: // Set this as public
    int id;

    Cat(int i) : id(i) {};

    bool operator==(const Cat &other) const {
        return id == other.id;
    }
};

void smart() {
    Cat* c1 = new Cat(0);
    delete c1;

    // This is more efficient
    std::unique_ptr<Cat> c2 = std::make_unique<Cat>(0);
    std::unique_ptr<Cat> c2b(new Cat(1));
    std::unique_ptr<Cat> c2c = std::move(c2);

    std::shared_ptr<Cat> c3 = std::make_shared<Cat>(0);
    std::shared_ptr<Cat> c3b = c3;

    std::weak_ptr<Cat> c4 = c3;
}

int main() {
    smart();
    return 0;
}
