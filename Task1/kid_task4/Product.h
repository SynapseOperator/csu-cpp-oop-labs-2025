#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using std::string;

class Product {
 private:
  string id;
  string name;
  double price;
  int stock;
  string productDate;

 public:
  Product();
  Product(const string& _id, const string& _name, double _price, int _stock,
          const string& _date);
  void setInfo(const string& _id, const string& _name, double _price,
               int _stock, const string& _date);
  void modifyName(const string& newName);
  void modifyPrice(double newPrice);
  void modifyDate(const string& newDate);
  bool sell(int quantity);
  bool purchase(int quantity);
  void display() const;
};

#endif