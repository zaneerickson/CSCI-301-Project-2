#ifndef SHOPCART_H
#define SHOPCART_H

#include <iostream>

#include "Bag.h"
#include "itemclass.h"

class shoppingcart : public Bag<item> {

    private:
    float totalprice;
    void updatetotalprice() {
    totalprice = 0.0;
    std::vector<item> contents = Bag<item>::toVector();
    for (const item& currentItem : contents) {
        totalprice += currentItem.getfloat() * currentItem.getint();
    }
}
    public:

    shoppingcart() {
        totalprice = 0.0;
    }; //default constructor


    float getTotalPrice() const {
        return totalprice;
    }  // accessor

    bool add(const item& iobj1) override{
        bool s = Bag<item>::add(iobj1);
        if (s) {
            updatetotalprice();
        }
        return s;
    }  // override

    bool remove(const item& iobj1) override {
        bool s = Bag<item>::remove(iobj1);
        if (s) {
            updatetotalprice();
        }
        return s;
    }  //override

    void clear() override {
        Bag<item>::clear();
        totalprice = 0.0;
    }   //override

    ~shoppingcart() {}; //default destructor
};

#endif