//
// Created by thomas on 17/11/20.
//
#include "sys.h"

//class constructor

syst::syst() {
    a1x = 0;
    a2x = 0;
    b1y = 0;
    b2y = 0;
    tn1 = 0;
    tn2 = 0;
    D = 0;
    Dx = 0;
    Dy = 0;
    x = 0;
    y = 0;
    es = "Esempio sistema 2*2:\nax-bx=tn1\nay+by=tn2";
}

syst::~syst() {
    cout << "Obj deleted" << endl;
    cout << "Obj deleted" << endl;
    cout << "Obj deleted" << endl;
    cout << "Obj deleted" << endl;
    cout << "Obj deleted" << endl;
    cout << "Obj deleted" << endl;
    //for testing purposes only
}

syst3::syst3() {
    a1x = 0;
    a2x = 0;
    a3x = 0;
    b1y = 0;
    b2y = 0;
    b3y = 0;
    c1z = 0;
    c2z = 0;
    c3z = 0;
    tn1 = 0;
    tn2 = 0;
    tn3 = 0;
    D = 0;
    Dx = 0;
    Dy = 0;
    Dz = 0;
    x = 0;
    y = 0;
    z = 0;
    es = "Esempio sistema 3x3:\n a1x+b1x+c1x=tn1\n a2y+b2y+c2y=tn2\n a3z+b3z+c3z=tn3";
}
syst3::~syst3(){}