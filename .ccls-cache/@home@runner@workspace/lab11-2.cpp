//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double loan1 = 12000.0;
    double loan2 = 15000.0;
    double rate = 0.08;
    int months = 36;

    double payment1 = (loan1 * rate / 12) / (1 - pow(1 + rate / 12, -months));
    double payment2 = (loan2 * rate / 12) / (1 - pow(1 + rate / 12, -months));

    cout << fixed << setprecision(2);
    cout << "Monthly payment for loan 1: $" << payment1 << endl;
    cout << "Monthly payment for loan 2: $" << payment2 << endl;

    return 0;
} //end of main function    
