#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, simpleInterest;
    cout << "Enter Principal amount (P): ";
    cin >> principal;
    cout << "Enter Rate of interest (R): ";
    cin >> rate;
    cout << "Enter Time in years (T): ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}
