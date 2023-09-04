#include <iostream>
#include <list>
#include <unordered_set>

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

struct CatHash {
    std::size_t operator()(const Cat& cat) const {
        return std::hash<int>()(cat.id);
    }
};

void structures() {
    // Linked list, if have alot of insertions and deletions
    std::list<std::shared_ptr<Cat>> catList;
    catList.push_back(std::make_shared<Cat>(0));

    // If use set, its ordered set
    std::unordered_set<std::string> catNameSet;
    catNameSet.insert("Meow");

    // Left side class must be hashed
    std::unordered_map<std::string, Cat> catNameMap;
    if (catNameMap.find("Meow") == catNameMap.end()) {
        catNameMap.insert(std::pair("Meow", Cat(0)));
    }

    std::unordered_map<Cat, std::string, CatHash> inverseMap;
    inverseMap.insert(std::pair(Cat(0), "Meow"));
}

int main() {
    structures();
    return 0;
}
