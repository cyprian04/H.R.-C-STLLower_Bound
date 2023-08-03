#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

int main() {

    int nQueires, type, key;
    std::set<int> mySet;
    std::cin >> nQueires;

    for (int i = 0; i < nQueires; i++)
    {
        std::cin >> type >> key;
        if (type == 1)
            mySet.insert(key);
        if (type == 2 && mySet.find(key) != mySet.end())
            mySet.erase(key);
        if (type == 3)
        {
            if (mySet.find(key) != mySet.end())
                std::cout << "Yes\n";
            else
                std::cout << "No\n";
        }
    }
    return 0;
}