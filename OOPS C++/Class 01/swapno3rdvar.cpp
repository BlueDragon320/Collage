#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int temp;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a = a + b; // 15
    b = a - b; // 5
    a = a - b; // 10
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
