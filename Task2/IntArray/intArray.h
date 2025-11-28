#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
using namespace std;

class intArray {
public:
    intArray(int size);                
    intArray(const intArray &x);        
    ~intArray();                        

    bool Set(int i, int elem);          
    bool Get(int i, int &elem);       
    int  Length() const;              
    void ReSize(int size);           
    void Print();                   

private:
    int *element;     
    int arraysize;    
};

#endif