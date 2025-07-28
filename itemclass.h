#ifndef P1T1_H
#define P1T1_H

#include <iostream>
#include <string>

class item {
private:
//private data members
std::string name;
int quantity;
float price;

public:

//get functions

std::string getstring() const {
    return name;
} //get string
int getint() const {
    return quantity;
} //get quantity (int)
float getfloat() const {
    return price;
} //get price (string)

//set functions

void setstring(std::string n); //set string
void setint(int q); //set int
void setfloat(float p); //set float

//Constructors/destructor function declarations

item() {
    name = "";
    quantity = 0;
    price = 0;
}

item(std::string n, int q, float p) {
    name = n;
    quantity = q;
    price = p;
}

~item() {};

//Overloading functions:

bool operator==(const item& iobj1) const {
    return (name == iobj1.name && quantity == iobj1.quantity && price == iobj1.price);
}

friend std::istream& operator>>(std::istream& input, item& iobj1);
friend std::ostream& operator<<(std::ostream& output, const item& iobj1);

};

#endif