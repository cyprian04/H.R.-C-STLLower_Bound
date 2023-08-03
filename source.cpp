#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define MaxMin( a, b) (std::abs(*(a)) + std::abs(*(b))) // adding * so we get value of iterator

int main() {

    int size, val, result;
    std::cin >> size;
    std::vector<int> vec;

    for (int i = 0; i < size; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    result = MaxMin(std::max_element(vec.begin(), vec.end()), std::min_element(vec.begin(), vec.end())); // passing iterators of max and min element
    std::cout << "Result = " << result;
    return 0;
}