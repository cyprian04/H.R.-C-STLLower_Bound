#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Box {
public:
    Box()
        : length(0), breadth(0), height(0)
    {}
    Box(int length_in, int breadth_in, int height_in)
        : length(length_in), breadth(breadth_in), height(height_in)
    {}
    Box(Box& src) {
        length = src.length;
        breadth = src.breadth;
        height = src.height;
    }
    long long CalculateVolume() const {
        return (long long)length * breadth * height;
    }
    int getLength() const {
        return length;
    }
    int getBreadth() const {
        return breadth;
    }
    int getHeight() const {
        return height;
    }
    bool operator<(const Box& rhs) {
        return (length < rhs.length) ||
            (breadth < rhs.breadth&& length == rhs.length) ||
            (height < rhs.height&& breadth == rhs.breadth && length == rhs.length);
    }
private:
    int length;
    int breadth;
    int height;
};

std::ostream& operator<<(std::ostream& out, const Box& src) {
    return out << src.getLength() << " " << src.getBreadth() << " " << src.getHeight();
}


int main() {

    int entries = 0;
    std::cin >> entries;
    Box temp;
    for (int i = 0; i < entries; i++) {

        int type = 0;
        std::cin >> type;

        if (type == 1)
            std::cout << temp << std::endl;
        if (type == 2) {
            int l, b, h;
            std::cin >> l >> b >> h;
            Box newB(l, b, h);
            temp = newB;
            std::cout << temp << std::endl;
        }
        if (type == 3) {

            int l, b, h;
            std::cin >> l >> b >> h;
            Box newB(l, b, h);

            if (newB < temp)
                std::cout << "Lesser\n";
            else
                std::cout << "Greater\n";
        }
        if (type == 4)
            std::cout << temp.CalculateVolume() << std::endl;
        if (type == 5) {
            Box newB(temp);
            std::cout << newB << std::endl;
        }
    }
    return 0;
}
