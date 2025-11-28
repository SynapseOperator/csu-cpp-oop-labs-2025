#include "Product.h"

#include <iostream>

using std::cout;
using std::endl;

Product::Product() : id(""), name(""), price(0.0), stock(0), productDate("") {}

Product::Product(const string& _id, const string& _name, double _price, int _stock,
        const string& _date)
    : id(_id), name(_name), price(_price), stock(_stock), productDate(_date) {}

void Product::setInfo(const string& _id, const string& _name, double _price, int _stock,
             const string& _date) {
  id = _id;
  name = _name;
  price = _price;
  stock = _stock;
  productDate = _date;
}

void Product::modifyName(const string& newName) { name = newName; }
void Product::modifyPrice(double newPrice) {
  if (newPrice >= 0)
    price = newPrice;
  else
    cout << "Invalid price!\n";
}
void Product::modifyDate(const string& newDate) { productDate = newDate; }

bool Product::sell(int quantity) {
  if (quantity <= 0) {
    cout << "Sell failed: quantity must be positive.\n";
    return false;
  }
  if (quantity > stock) {
    cout << "Sell failed: not enough stock.\n";
    return false;
  }
  stock -= quantity;
  cout << "Sell success, total price = " << price * quantity
       << ", stock now = " << stock << endl;
  return true;
}

bool Product::purchase(int quantity) {
  if (quantity <= 0) {
    cout << "Purchase failed: quantity must be positive.\n";
    return false;
  }
  stock += quantity;
  cout << "Purchase success, stock now = " << stock << endl;
  return true;
}

void Product::display() const {
  cout << "ID          : " << id << endl;
  cout << "Name        : " << name << endl;
  cout << "Price       : " << price << endl;
  cout << "Stock       : " << stock << endl;
  cout << "ProductDate : " << productDate << endl;
}