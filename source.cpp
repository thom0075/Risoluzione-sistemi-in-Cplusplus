//
// Created by Thomas Cellitti on 1/11/20.
//
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "sys.h"


using namespace std;
using namespace this_thread;

float D0();    //no parameters


float GCD_finder(float a, float b);

int main() {
    //sleep_for(std::chrono::seconds(1));
    int user_input_0;
    cout << "Cosa vuoi fare?";
    cout << "1. Risolvere un sistema 2x2";
    cout << "2. Risolvere sistema 3x3";
    cout << "3  Uscire dal programma";
    cout << "\n Scegliere un`opzione (1/3)" << endl;
    cin >> user_input_0;

    switch (user_input_0) {
        case 1: {
            syst problem1;  //obj is declared

            cout << problem1.es << endl;

            float user_input_1;
            cout << "Inserisci A1x > " << endl;    //user inserts numbers
            cin >> user_input_1;

            float user_input_2;
            cout << "Inserisci A2x > " << endl;
            cin >> user_input_2;

            float user_input_3;
            cout << "Inserisci B1y > " << endl;
            cin >> user_input_3;

            float user_input_4;
            cout << "Inserisci B2y > " << endl;
            cin >> user_input_4;


            float user_input_5;
            cout << "Inserisci il primo termine noto (sopra) > " << endl;
            cin >> user_input_5;

            float user_input_6;
            cout << "Inserisci il primo termine noto (sotto) > " << endl;
            cin >> user_input_6;


            problem1.a1x = user_input_1;
            problem1.a2x = user_input_2;
            problem1.b1y = user_input_3;
            problem1.b2y = user_input_4;
            problem1.tn1 = user_input_5;
            problem1.tn2 = user_input_6;

            problem1.D = problem1.a1x * problem1.b2y - problem1.a2x * problem1.b1y;
            cout << "The result (D) is: " << problem1.D << endl;

            problem1.Dx = problem1.tn1 * problem1.b2y - problem1.tn2 * problem1.b1y;
            cout << "The result (Dx) is: " << problem1.Dx << endl;

            problem1.Dy = problem1.a1x * problem1.tn2 - problem1.a2x * problem1.tn1;
            cout << "The result (Dy) is: " << problem1.Dy << endl;

            problem1.x = problem1.Dx / problem1.D;
            problem1.y = problem1.Dy / problem1.D;

            cout << problem1.y << " <-- Y" << endl;
            cout << problem1.x << " <-- X" << endl;
        }
        case 2: {
            syst3 problem2;
            cout << problem2.es << endl;
            float user_input_7;
            float user_input_8;
            float user_input_9;
            float user_input_10;
            float user_input_11;
            float user_input_12;
            float user_input_13;
            float user_input_14;
            float user_input_15;
            float user_input_16;
            float user_input_17;
            float user_input_18;

            cout << "Inserisci A1x > " << endl;
            cin >> user_input_7;
            cout << "Inserisci A2x > " << endl;
            cin >> user_input_8;
            cout << "Inserisci A3x > " << endl;
            cin >> user_input_9;
            cout << "Inserisci B1y > " << endl;
            cin >> user_input_10;
            cout << "Inserisci B2y > " << endl;
            cin >> user_input_11;
            cout << "Inserisci B3y > " << endl;
            cin >> user_input_12;
            cout << "Inserisci C1z > " << endl;
            cin >> user_input_13;
            cout << "Inserisci C2z > " << endl;
            cin >> user_input_14;
            cout << "Inserisci C3z > " << endl;
            cin >> user_input_15;
            cout << "Inserisci tn1 > " << endl;
            cin >> user_input_16;
            cout << "Inserisci tn2 > " << endl;
            cin >> user_input_17;
            cout << "Inserisci tn3 > " << endl;
            cin >> user_input_18;

            //cout << "Inserisci A1x > " << endl;

            problem2.a1x = user_input_7;
            problem2.a2x = user_input_8;
            problem2.a3x = user_input_9;
            problem2.b1y = user_input_10;
            problem2.b2y = user_input_11;
            problem2.b3y = user_input_12;
            problem2.c1z = user_input_13;
            problem2.c2z = user_input_14;
            problem2.c3z = user_input_15;
            problem2.tn1 = user_input_16;
            problem2.tn2 = user_input_17;
            problem2.tn3 = user_input_18;

            problem2.D = (problem2.a1x * problem2.b2y * problem2.c3z) + (problem2.b1y * problem2.c2z * problem2.a3x) +
                         (problem2.c1z * problem2.a2x * problem2.b3y) - (problem2.c1z * problem2.b2y * problem2.a3x) -
                         (problem2.b1y * problem2.a2x * problem2.c3z) - (problem2.a1x * problem2.c2z * problem2.b3y);
            problem2.Dx = (problem2.tn1 * problem2.b2y * problem2.c3z) + (problem2.b1y * problem2.c2z * problem2.tn3) +
                          (problem2.c1z * problem2.tn2 * problem2.b3y) - (problem2.tn1 * problem2.c2z * problem2.b3y) -
                          (problem2.b1y * problem2.tn2 * problem2.c3z) - (problem2.c1z * problem2.b2y * problem2.tn3);
            problem2.Dy = (problem2.a1x * problem2.tn2 * problem2.c3z) + (problem2.tn1 * problem2.c2z * problem2.a3x) +
                          (problem2.c1z * problem2.a2x * problem2.tn3) - (problem2.a1x * problem2.c2z * problem2.tn3) -
                          (problem2.tn1 * problem2.a2x * problem2.c3z) - (problem2.c1z * problem2.tn2 * problem2.a3x);
            problem2.Dz = (problem2.a1x * problem2.b2y * problem2.tn3) + (problem2.b1y * problem2.tn2 * problem2.a3x) +
                          (problem2.tn1 * problem2.a2x * problem2.b3y) - (problem2.a1x * problem2.tn2 * problem2.b3y) -
                          (problem2.b1y * problem2.a2x * problem2.tn3) - (problem2.tn1 * problem2.b2y * problem2.a3x);

            cout << problem2.D << " <-- D " << endl;
            cout << problem2.Dx << " <-- Dx" << endl;
            cout << problem2.Dy << " <-- Dy" << endl;
            cout << problem2.Dz << " <-- Dz" << endl;

            problem2.x = problem2.Dx / problem2.D;
            problem2.y = problem2.Dy / problem2.D;
            problem2.z = problem2.Dz / problem2.D;

            cout << problem2.x << " <-- X" << endl;
            cout << problem2.y << " <-- Y" << endl;
            cout << problem2.z << " <-- Z " << endl;
        }
        case 3: {
            break;
        }
        default: {
            cout << "404, Operation not found" << endl;
        }
    }
//It works!










/*
    if ((int)problem1.x == problem1.x) {
        cout << problem1.x << " <-- X" << endl;
    }
    else if ((int)problem1.x != problem1.x) {
        cout << problem1.Dx << " / " << problem1.D << endl;
    }*/



    //cout << "MCD: " << GCD_finder(problem1.Dx, problem1.D) << endl;
/*
    string input1__;
    cout << "Premi enter per uscire dal programma" << endl;
    cin >> input1__;*/
    return 0;

}
/*
float GCD_finder(float a, float b) {
    if (a == 0) {
        return a;
    }
    if (b == 0) {
        return b;
    }
    if (a == b) {
        return a;
    }
    if (a > b) {
        return GCD_finder(a - b, b);    //recursive function call
        return GCD_finder(a, b - a);
    }*/
/*
 * This part of code, is under developing, please check a newer version of the
 * program to use this function
 * current version: alpha 1.0
 *
 * */