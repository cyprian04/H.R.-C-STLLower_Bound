#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

int main() {

    std::map<std::string, int> myMap;
    int nQueries, type, score;
    std::string name;
    std::cin >> nQueries;

    for (int n = 0; n < nQueries; n++) {

        std::cin >> type >> name;
        auto i = myMap.find(name); // setting the iterator on key position in map, we don't have to, but we are typing less ;)
        if (type == 1) {
            std::cin >> score;
            if (i == myMap.end())
                myMap.insert({ name, score }); // if we use emplace we don't need {}     
            else
                i->second += score;
        }
        if (type == 2)
            i->second = 0; // setting score of a student to 0
        if (type == 3)
        {
            if (i != myMap.end()) //checking if key already exists
                std::cout << i->second << std::endl;
            else
                std::cout << 0 << std::endl;
        }
    }
    return 0;
}