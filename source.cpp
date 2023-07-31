#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class UserData {
public:
    int age; // they could be private, but there would be setters and getters ;)
    int standard;
    std::string surname;
    std::string name;
};

int main() {
    UserData data;

    std::cin >> data.age >> data.name >> data.surname >> data.standard;
    std::cout << data.age << std::endl;
    std::cout << data.surname << ", " << data.name << std::endl;
    std::cout << data.standard << "\n\n";
    std::cout << data.age << "," << data.name << "," << data.surname << "," << data.standard << std::endl;

    return 0;
}