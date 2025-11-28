#include"Product.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Product p("P001", "Apple", 3.5, 100, "2025-11-01");
    p.display();

    p.sell(10);
    p.purchase(30);
    p.modifyPrice(3.8);

    cout << "\nAfter operations:\n";
    p.display();

    return 0;
}
