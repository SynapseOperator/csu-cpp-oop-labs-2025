#include "Book.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Book::Book() : title(""), author(""), year(0), isbn("") {}
Book::Book(const string& t, const string& a, int y, const string& i)
    : title(t), author(a), year(y), isbn(i) {}
void Book::DisplayBook() const {
  cout << "Title : " << title << endl;
  cout << "Author: " << author << endl;
  cout << "Year  : " << year << endl;
  cout << "ISBN  : " << isbn << endl;
}
void Book::UpdateYear(int newYear) {
  if (newYear > 0) {
    year = newYear;
  } else {
    cout << "Invalid year!" << endl;
  }
}