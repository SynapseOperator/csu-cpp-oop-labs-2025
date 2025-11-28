#include "Publication.h"

#include <iostream>
using namespace std;

// ----- Publication -----

Publication::Publication() : title(""), name(""), price(0.0), date("") {}

Publication::Publication(const string& t, const string& n, double p,
                         const string& d)
    : title(t), name(n), price(p), date(d) {}

Publication::~Publication() {}

void Publication::inputData() {
  cout << "Input title: ";
  getline(cin, title);
  cout << "Input publisher name: ";
  getline(cin, name);
  cout << "Input price: ";
  cin >> price;
  cout << "Input publish date: ";
  getline(cin, date);
}

void Publication::display() const {
  cout << "Title   : " << title << endl;
  cout << "Name    : " << name << endl;
  cout << "Price   : " << price << endl;
  cout << "Date    : " << date << endl;
}

// ----- Book -----

Book::Book() : Publication(), page(0) {}

Book::Book(const string& t, const string& n, double p, const string& d, int pg)
    : Publication(t, n, p, d), page(pg) {}

Book::~Book() {}

void Book::inputData() {
  Publication::inputData();
  cout << "Input page count: ";
  cin >> page;
  cin.ignore();
}

void Book::display() const {
  cout << "[Book]" << endl;
  Publication::display();
  cout << "Pages   : " << page << endl;
}

// ----- Tape -----

Tape::Tape() : Publication(), playtime(0.0) {}

Tape::Tape(const string& t, const string& n, double p, const string& d,
           double pt)
    : Publication(t, n, p, d), playtime(pt) {}

Tape::~Tape() {}

void Tape::inputData() {
  Publication::inputData();
  cout << "Input playtime(hours): ";
  cin >> playtime;
  cin.ignore();
}

void Tape::display() const {
  cout << "[Tape]" << endl;
  Publication::display();
  cout << "Playtime: " << playtime << " hours" << endl;
}
