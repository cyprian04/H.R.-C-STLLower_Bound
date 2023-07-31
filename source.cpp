#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int* a, int* b)
{
    int temp1 = *a + *b;
    int temp2 = abs(*a - *b);
    *a = temp1;
    *b = temp2;
}

int main() {

    int c;
    int d;
    int* a = &c;
    int* b = &d;

    cin >> c >> d;
    update(a, b);
    cout << *a << endl << *b;
    return 0;
}