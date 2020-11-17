//
// Created by thomas on 17/11/20.
//

#ifndef CLION_SYS_H
#define CLION_SYS_H
#endif //CLION_SYS_H

#include <iostream>

using namespace std;

class syst {
public:
    float a1x;
    float a2x;
    float b1y;
    float b2y;
    float tn1;
    float tn2;
    float D;
    float Dx;
    float Dy;
    float x;
    float y;//user must enter the values, see source.cpp file.
    string es;

    syst();

    ~syst();    //destructor and constructor
};

class syst3 {
public:
    float a1x;
    float a2x;
    float a3x;
    float b1y;
    float b2y;
    float b3y;
    float c1z;
    float c2z;
    float c3z;
    float tn1;
    float tn2;
    float tn3;
    float D;
    float Dx;
    float Dy;
    float Dz;
    float x;
    float y;
    float z;
    string es;

    syst3();

    ~syst3();
};
/*
 * 1 (D)
 * (a1x*b2y*c3z)+(b1y*c2z*a3x)+(c1z*a2x*b3y)-(c1z*b2y*a3x)-(b1y*a2x*c3z)-(a1x*c2z*b3y)
 *2(Dx)
 * (tn1*b2y*c3z)+(b1y*c2z*tn3)+(c1z*tn2*b3y)-(tn1*c2z*b3y)-(b1y*tn2*c3z)-(c1z*b2y*tn3)
 * 3(Dy)
 * (a1x*tn2*c3z)+(tn1*c2z*a3x)+(c1z*a2x*tn3)-(a1x*c2z*tn3)-(tn1*a2x*c3z)-(c1z*tn2*a3x)
 * 4(Dz)
 * (a1x*b2y*tn3)+(b1y*tn2*a3x)+(tn1*a2x*b3y)-(a1x*tn2*b3y)-(b1y*a2x*tn3)-(tn1*b2y*a3x)
 *
 *
 * */

