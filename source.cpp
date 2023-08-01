#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

void parseInts(string str) {

    stringstream ss(str);
    vector<int> liczby;
    char ch;
    int temp;

    while (ss) {
        ss >> temp >> ch;
        liczby.push_back(temp);
    }

    for (int i = 0; i < int(liczby.size()); i++)
        cout << liczby[i] << endl;
}

int main() {
    string ABC;
    cin >> ABC;
    parseInts(ABC);
    return 0;
}
