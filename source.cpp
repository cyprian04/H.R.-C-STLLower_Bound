#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::vector<std::vector<int>> Index;
    int NumberOfIndex = 0;
    int NumberOfQueries = 0;
    int sizeOfVec;
    int counter = 0;
    int counter2 = 0;
    int a;

    std::cin >> NumberOfIndex;
    std::cin >> NumberOfQueries;


    for (int i = 0; i < NumberOfIndex; i++) {

        Index.push_back(std::vector<int>());
        std::cin >> sizeOfVec;

        for (int j = 0; j < sizeOfVec; j++) {
            std::cin >> a;
            Index[i].push_back(a);
        }
    }

    int index;
    int querry;

    while (NumberOfQueries > counter2) {
        std::cin >> index >> querry;
        std::cout << Index[index][querry] << std::endl;
        counter2++;
    }
    return 0;
}