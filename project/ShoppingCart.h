#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include <utility>
#include <iostream>
#include <iomanip>
#include "Product.h"

class ShoppingCart {
private:
  // pair<ProductID, Quantity>
std::vector<std::pair<int, int>> items;

public:
  void addItem(int productId, int qty);
  void removeItem(int product Id);
  void updateQuantity(int productId, int newQty);
  void clear();

  const std::vector<std::pair<int, int>>& getItems() const;
  bool isEmpty() const;
  void display() const;
};
#endif
