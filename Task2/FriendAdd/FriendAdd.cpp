#include <iostream>
using namespace std;

class complex {
private:
    double real;
    double imag;

public:
    complex(double r = 0.0, double i = 0.0)
        : real(r), imag(i) {}

    void print() const {
        cout << "(" << real << "," << imag << "i)";
    }

    friend complex add(const complex& c1, const complex& c2);
};

complex add(const complex& c1, const complex& c2) {
    return complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    complex c1(1.5, 2.0), c2(3.0, -1.0);
    complex c3 = add(c1, c2);

    cout << "c1 = "; c1.print(); cout << endl;
    cout << "c2 = "; c2.print(); cout << endl;
    cout << "c1 + c2 = "; c3.print(); cout << endl;

    return 0;
}
