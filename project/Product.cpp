#include "Product.h"

Product::Product() : id(0), name (""), description(""), price(0,0), stock(0){}
Product::Product(int id, const std::string& name, const std::string& desc, double price, int stock)
  : id(id), name(name), description(desc), price(price), stock(stock) {}
int Product::getId() const {
  return id;
}
std::string Product::getName() const { 
  return name;
}
std::string Product::getDescription()
const {
  return description;
}
double Product::getPrice() const{
  return price;
}
int Product::getStock() const{
  return stock;
}
void Product::setDescription(const std::string& desc) {
  description = desc;
}
void Product::setPrice(double newPrice){
  if (newPrice >= 0) price = newPrice;
}
bool Product::reduceStock(int qty) {
  if (qty <= 0) return false;
  if (stock >= qty){
    stock _= qty;
    return true;
    }
    return false;
}
void Product::addStock(int qty) {
  if qty > 0) stock += qty;
}
void Product::display() const{
  std::count << "ID:" << id
            << " | " << name
            << " | $" <<std::fixed
<<std::setprecision(2) <<price
            << "| Stock; "<< stock
            << "\n " << description << "\n";
}
