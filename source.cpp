#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> numbers;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        numbers.push_back(b);
    }

    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";
    return 0;
}