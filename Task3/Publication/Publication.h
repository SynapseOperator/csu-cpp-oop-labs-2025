#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
using namespace std;

class Publication {
 protected:
  string title;
  string name;
  double price;
  string date;

 public:
  Publication();
  Publication(const string& t, const string& n, double p, const string& d);
  virtual ~Publication();

  virtual void inputData();
  virtual void display() const;
};

class Book : public Publication {
 private:
  int page;

 public:
  Book();
  Book(const string& t, const string& n, double p, const string& d, int pg);
  ~Book() override;

  void inputData() override;
  void display() const override;
};

class Tape : public Publication {
 private:
  double playtime;

 public:
  Tape();
  Tape(const string& t, const string& n, double p, const string& d, double pt);
  ~Tape() override;

  void inputData() override;
  void display() const override;
};

#endif  // PUBLICATION_H
