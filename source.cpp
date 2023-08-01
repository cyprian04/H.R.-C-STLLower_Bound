#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Triangle { // A
public:
    void print() { std::cout << "I am a triangle\n"; }
};

class Isosceles : public Triangle { // B inherits A
public:
    void print() { std::cout << "I am an isosceles triangle\n"; }
};

class Equilateral : public Isosceles { // C inherits B
public:
    void print() {
        std::cout << "I am an equilateral triangle\n";
        Isosceles::print();
        Triangle::print();
    }
};

int main() {

    Equilateral obj;
    obj.print();
    return 0;
}