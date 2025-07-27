#include "p2t1.h"
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
    item i1;
    cout << "Welcome to XXX SHOPPING CENTER. Enter the item you selected as the following order:" << endl << "name unitPrice quantity" << endl << "(Name can not contain any space. Otherwise errors happen!)" << endl << "-->";
    cin >> i1;
    cout << endl << i1;
}