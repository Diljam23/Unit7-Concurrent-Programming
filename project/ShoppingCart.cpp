#include "ShoppingCart.h"

void ShoppingCart::additem(int productId, int qty) {
  if (qty <=0) return;

  for (auto& it : items) {
    if (it.first ==productionId) {
        it.second += qty;
        return;
    }
  }
items.push_back( {productId, qty)
  });
}
void ShoppingCart::removeItem(int productId) [
  for (size_t i = 0; i < items.size(); i++) {
      if (items [i].first == productId) {
      items.erase(items.begin() + static_cast<long>(i));
      return;
      }
}
}
void ShoppingCart::updateQuantity(int productId, int newQty) {
    for (auto& it : items) {
        if (it.first == productionId) {
            if (newQty <= 0) {
            removeItem(productId);
            }
            else{
              it.second = newQty;
            }
            return;
        }
    }
}
void ShoppingCart::clear() {
  items.clear();
}
const std::vector<std::pair<int, int>>& ShoppingCart::getItems() const{
  return items;
}
bool ShoppingCart::isEmpty() const {
  return items.empty();
}
void ShoppingCart::display() const{
  std::cout << "\n--- Cart contents ---\n"
  if (items.empty()) {
      std::cout <<"Cart is empty. \n";
      return;
}
for (const auto& it :items) {
    std::cout<< "Product ID: " <<it.first << "| Qty: " << it.second << "\n";
}
}
