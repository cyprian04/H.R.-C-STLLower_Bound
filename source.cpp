#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct PersonalData {
    int value1;
    int value2;
    std::string valueN;
    std::string valueS;
};


int main() {

    PersonalData dt;
    cin >> dt.value1 >> dt.valueN >> dt.valueS >> dt.value2;
    cout << dt.value1 << " " << dt.valueN << " " << dt.valueS << " " << dt.value2;
    return 0;
}
