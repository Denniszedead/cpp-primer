//
// Created by Ng Wen Hao Dennis on 5/9/23.
//

// Create generics
template <typename T, typename U>
class MyPair {
private:
    T first;
    U second;
public:
    MyPair(T f, U s) : first(f), second(s) {}
};

void templates() {
    MyPair a(1, 2);
    MyPair b("Hello", "World");
    MyPair c("Hello", 3);
}

int main() {
    return 0;
}
