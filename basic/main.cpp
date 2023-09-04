#include <iostream>
#include <vector>

// All its attributes are public by default
/*struct Cat {
    int id;

    Cat(int i) : id(i) {};

    bool operator==(const Cat &other) const {
        return id == other.id;
    }
};*/

// All its attributes are private by default
class Cat {
public: // Set this as public
    int id;

    Cat(int i) : id(i) {};

    bool operator==(const Cat &other) const {
        return id == other.id;
    }
};

void modify(std::vector<Cat>& cattos) {
    for (int i = 0; i < cattos.size(); i++) {
        cattos[i].id = 500;
    }
}

void basics() {
    // Create an object
    Cat a = Cat(0);
    Cat b(1);

    std::vector<Cat> cats;
    for (int i = 0; i < 3; i++) {
        cats.push_back(Cat(i));
    }

    for (Cat& cat: cats) {
        std::cout << "Cat id: " << cat.id << std::endl;
        cat.id = 100;
    }
    std::cout << std::endl;

    modify(cats);

    std::cout << "Modified cats:" << std::endl;
    for (auto cat: cats) {
        std::cout << "Cat id: " << cat.id << std::endl;
    }
}

int main() {
    basics();

    return 0;
}

