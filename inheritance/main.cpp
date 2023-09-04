#include <iostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

class Person {
public:
    virtual void sayHi() {
        std::cout << "Hi, I am a Person!" << std::endl;
    }
};

class Student : public Person {
public:
    void sayHi() {
        std::cout << "Hi, I am a Student!" << std::endl;
    }
};

void inheritance() {
    std::shared_ptr<Person> p = std::make_shared<Person>();
    std::shared_ptr<Student> s = std::make_shared<Student>();

    p->sayHi();
    s->sayHi();

    Person* person = new Student();
    person->sayHi();
}

int main() {
    inheritance();
    return 0;
}
