#include <iostream>
#include <ostream>

//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

using namespace std;

namespace customA {
    void doSomething() {
        cout << "CustomA::doSomething() called" << endl;
    }
}

namespace customB {
    void doSomething() {
        cout << "CustomB::doSomething() called" << endl;
    }
}

// If used at the same time, same function doSomething() will be ambiguous.
using namespace customA;
using namespace customB;

void name() {
    customA::doSomething();
    customB::doSomething();
}

int main() {
    name();
    return 0;
}
