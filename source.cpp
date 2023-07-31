#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {

    std::vector<int> numbers;
    int size;
    int point;
    int start;
    int end;

    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        numbers.push_back(temp);
    }

    std::cin >> point >> start >> end;
    numbers.erase(numbers.begin() + (--point));
    numbers.erase(numbers.begin() + (--start), numbers.begin() + (--end));

    std::cout << numbers.size() << std::endl;
    for (auto n : numbers)
        std::cout << n << " ";
    return 0;
}