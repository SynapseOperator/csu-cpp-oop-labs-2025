#include "Rectangel.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void Rectangle::setSize() {
    cin >> width >> length;
}

void Rectangle::getArea() {
    int area = width * length;
    cout << "Area is: " << area << endl;
}
