#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    std::vector<int> numbers;
    int size;
    int nQueries;

    std::cin >> size;
    for (int i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        numbers.push_back(temp);
    }
    std::cin >> nQueries;

    for (int i = 0; i < nQueries; i++) {
        int temp = 0;
        std::cin >> --temp;
        auto point = std::lower_bound(numbers.begin(), numbers.end(), temp);
        // if number that we typed occures then we print Yes and it's index location(pos in vector)
        // if the number is not present you have to print "No" (without the quotes) followed by the
        // index of the next smallest number just greater than that number.

        if (temp == *point)
            std::cout << "Yes " << ++point - numbers.begin() << std::endl;
        else
            std::cout << "No " << ++point - numbers.begin() << std::endl;
    }
    return 0;
}
