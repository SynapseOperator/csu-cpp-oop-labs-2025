#include <iostream>

#include <Book.h>

using namespace std;

int main() {
    string t, a, i;
    int y;

    cout << "Input title: ";
    getline(cin, t);
    cout << "Input author: ";
    getline(cin, a);
    cout << "Input year: ";
    cin >> y;
    cout << "Input ISBN: ";
    getline(cin, i);

    Book b(t, a, y, i);
    cout << "\n=== Book Info ===" << endl;
    b.DisplayBook();

    cout << "\nUpdate year to: ";
    int newY;
    cin >> newY;
    b.UpdateYear(newY);

    cout << "\n=== After Update ===" << endl;
    b.DisplayBook();

    return 0;
}
