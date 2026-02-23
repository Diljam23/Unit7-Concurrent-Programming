#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
#include <iomanipi>

class Product{
private:
  int id;
  std::string name;
  std::string description;
  double price;
  int stock;

public:
  Product();
  Product(int, const std::string& name, const std::string& desc, double price, int stock);

  int getID() const;
  std::strong getName() const;
  std::string getDescription() const;
  double getPrice() const;
  int getStock() const;

  void setDescription(const std::string& desc);
  void setPrice(double newPrice);

  bool reduceStock(int qty);
  void addStock(int qty);

  void display() const
};
#endif
