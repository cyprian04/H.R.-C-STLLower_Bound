#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string tekst1;
    string tekst2;

    cin >> tekst1 >> tekst2;

    int sizeOfFirst = tekst1.length();
    int sizeOfSecond = tekst2.length();
    string Together = tekst1 + tekst2;
    string A = tekst2.substr(0, 1);
    string B = tekst1.substr(0, 1);
    string Substr = A + tekst1.erase(0, 1) + " " + B + tekst2.erase(0, 1);
    cout << sizeOfFirst << " " << sizeOfSecond << endl;
    cout << Together << endl;
    cout << Substr << endl;
    return 0;
}

