#ifndef BOOK_H
#define BOOK_H

class Book {
 private:
  string title;
  string author;
  int year;
  string isbn;

 public:
  Book();
  Book(const string& t, const string& a, int y, const string& i);
  void DisplayBook() const;
  void UpdateYear(int newYear);
};

#endif