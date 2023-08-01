#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
// This implemenation works only for c++11 standard on HackerRank test cases
//for unknow reasons we can't pass all test cases in c++14 and c++20 standard, although the implementation is the same. HackerRank int main() and my int mian() for inputs were the same
template <typename T>
class AddElements {
public:
    AddElements(const T& element) : element(element) {}
    T add(const T& src)
    {
        return element += src;
    }
private:
    T element;
};

template <> class AddElements<std::string> { // class template specialization
public:
    AddElements(const std::string& element) : element(element) {}
    std::string concatenate(const std::string& src)
    {
        return element += src;
    }
private:
    std::string element;
};

int main() {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "float") {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}