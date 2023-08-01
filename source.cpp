#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Triangle {
public:
    void triangle() {
        std::cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        std::cout << "I am an isosceles triangle\n";
        std::cout << "In an isosceles triangle two sides are equal\n";
        Triangle::triangle(); // acessing parent class function
    }
};

int main() {
    Isosceles isc;
    isc.isosceles();
    return 0;
}