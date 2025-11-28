#include "intArray.h"

intArray::intArray(int size) {
    if (size <= 0) {
        arraysize = 0;
        element = nullptr;
    } else {
        arraysize = size;
        element = new int[arraysize];
        for (int i = 0; i < arraysize; ++i)
            element[i] = 0;
    }
}

intArray::intArray(const intArray &x) {
    arraysize = x.arraysize;
    if (arraysize > 0) {
        element = new int[arraysize];
        for (int i = 0; i < arraysize; ++i)
            element[i] = x.element[i];
    } else {
        element = nullptr;
    }
}

intArray::~intArray() {
    delete [] element;
}

bool intArray::Set(int i, int elem) {
    if (i < 0 || i >= arraysize) return false;
    element[i] = elem;
    return true;
}

bool intArray::Get(int i, int &elem) {
    if (i < 0 || i >= arraysize) return false;
    elem = element[i];
    return true;
}

int intArray::Length() const {
    return arraysize;
}

void intArray::ReSize(int size) {
    if (size <= 0) {
        delete [] element;
        element = nullptr;
        arraysize = 0;
        return;
    }

    int *newArr = new int[size];
    int minLen = (size < arraysize) ? size : arraysize;
    for (int i = 0; i < minLen; ++i)
        newArr[i] = element[i];
    for (int i = minLen; i < size; ++i)
        newArr[i] = 0;

    delete [] element;
    element = newArr;
    arraysize = size;
}

void intArray::Print() {
    for (int i = 0; i < arraysize; ++i)
        cout << element[i] << " ";
    cout << endl;
}
