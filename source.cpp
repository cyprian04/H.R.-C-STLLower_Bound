#include <cmath>
#include <iostream>
#include <string>
#include <sstream>

class Complex
{
public:
    Complex() = default;
    Complex(int a, int b)
        : a(a), b(b)
    {}
    Complex operator+(const Complex& rhs)
    {
        a += rhs.a;
        b += rhs.b;
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& out, const Complex& src)
    {
        return  out << src.a << "+i" << src.b;
    }
    int a;
    int b;
};

int main() {

    char temp;
    int a, b;
    std::string val1, val2;
    std::cin >> val1 >> val2;

    std::stringstream s1(val1); //using stringstream to extract only int values
    std::stringstream s2(val2);

    s1 >> a >> temp >> temp >> b;
    Complex A(a, b);

    s2 >> a >> temp >> temp >> b;
    Complex B(a, b);

    Complex C = A + B;
    std::cout << C;
    return 0;
}
