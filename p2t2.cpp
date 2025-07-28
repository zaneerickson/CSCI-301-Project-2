#include "shopcart.h"
#include <iostream>
using namespace std;

//input/output overloads:

std::istream& operator>>(std::istream& input, item& iobj1) { //overloaded >> operator
    input >> iobj1.name >> iobj1.quantity >> iobj1.price;
    return input; //inputs object
}

std::ostream& operator<<(std::ostream& output, const item& iobj1) { //overloaded << operator
    output << iobj1.getstring() << " " << iobj1.getint() << " " << iobj1.getfloat();
    return output; //outputs object
}

//test run

int main() {
    shoppingcart cart;

    // Create some items
    item apple("Apple", 3, 0.99);
    item banana("Banana", 2, 0.59);
    item orange("Orange", 5, 0.79);

    // Add items to cart
    cart.add(apple);
    cart.add(banana);
    cart.add(orange);

    cout << "Cart total after adding items: $" << cart.getTotalPrice() << endl;

    // Remove one item
    cart.remove(banana);

    cout << "Cart total after removing banana: $" << cart.getTotalPrice() << endl;

    // Clear cart
    cart.clear();

    cout << "Cart total after clearing: $" << cart.getTotalPrice() << endl;
}