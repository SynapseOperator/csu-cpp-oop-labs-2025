#include <iostream>

#include "Student.h"

using namespace std;

int main() {
    const int N = 5;
    Student stu[N];

    cout << "Input " << N << " students (id score):" << endl;
    for (int i = 0; i < N; ++i) {
        int id; double sc;
        cin >> id >> sc;
        stu[i].set(id, sc);
    }

    maxStudent(stu, N);
    return 0;
}
