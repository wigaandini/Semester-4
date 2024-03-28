#include "cb.hpp"

int main() {
    Base b;
    Derived d;
    // non-ptr, non-ref: non-virtual function call
    Base b1 = b; // the type of b1 is Base
    Base d1 = d; // the type of d1 is Base as well
    b1.f(); // prints "base"
    d1.f(); // prints "base" as well
    // virtual function call through reference
    Base& br = b; // the type of br is Base&
    Base& dr = d; // the type of dr is Base& as well
    br.f(); // prints "base"
    dr.f(); // prints "derived“
    // virtual function call through pointer
    Base* bp = &b; // the type of bp is Base*
    Base* dp = &d; // the type of dp is Base* as well
    bp->f(); // prints "base"
    dp->f(); // prints "derived"
    // non-virtual function call
    br.Base::f(); // prints "base"
    dr.Base::f(); // prints "base"
}