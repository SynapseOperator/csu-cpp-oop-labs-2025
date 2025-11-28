#include "ScoreStudent.h"
#include <iostream>
using namespace std;

int main() {
    const int N = 3; 
    Student stu[N];

    cout << "Input " << N << " students: (num name Chinese English Math)" << endl;
    for (int i = 0; i < N; ++i) {
        int num;
        string name;
        double c, e, m;
        cin >> num >> name >> c >> e >> m;
        Score sc(c, e, m);
        stu[i] = Student(num, name, sc);
    }

    cout << "\n=== Students Info ===\n";
    for (int i = 0; i < N; ++i) {
        cout << "--- Student " << i+1 << " ---" << endl;
        stu[i].print();
    }

    return 0;
}
