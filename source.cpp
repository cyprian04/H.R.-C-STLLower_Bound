#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Student {
public:
    int GetTotalScore() {
        return TotalScore;
    }
    void input() {
        int hanlder;
        for (int i = 0; i < 5; i++) {
            std::cin >> hanlder;
            TotalScore += hanlder;
        }
    }
private:
    int TotalScore;
};


int main() {

    std::vector<Student> AllStudents;
    int StudentsCount;
    int result = 0;

    std::cin >> StudentsCount;
    AllStudents.resize(StudentsCount);

    for (int i = 0; i < StudentsCount; i++)
        AllStudents[i].input();

    for (int i = 1; i < StudentsCount; i++) {

        if (AllStudents[0].GetTotalScore() < AllStudents[i].GetTotalScore())
            result++;
    }
    std::cout << result;

    return 0;
}