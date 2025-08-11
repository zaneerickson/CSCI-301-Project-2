#include "shopcart.h"
#include <iostream>
using namespace std;

//input/output overloads:

std::istream& operator>>(std::istream& input, item& iobj1) { //overloaded >> operator
    input >> iobj1.name >> iobj1.price >> iobj1.quantity;
    return input; //inputs object
}

std::ostream& operator<<(std::ostream& output, const item& iobj1) { //overloaded << operator
    output << iobj1.getstring() << " " << iobj1.getfloat() << " " << iobj1.getint();
    return output; //outputs object
}


//test run

int main() {
    shoppingcart cart;
    item i1;
    cout << "Welcome to XXX SHOPPING CENTER." << endl << " Enter the item you selected as the following order: " << endl << " name unitPrice quantity" << endl << "(Name can not contain any space. Otherwise errors happen!)" << endl;
    cin >> i1;
    cout << i1;
}