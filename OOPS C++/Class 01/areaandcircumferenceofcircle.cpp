// C++ Program to calculate the area and circumference of a cirle given its radius
#include <iostream>
using namespace std;
int main(){
	float radius, area, circumference;
	const float PI = 3.14159;
	cout << "Enter radius of the circle: ";
	cin >> radius;
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	cout << "Area of Circle = " << area << endl;
	cout << "Circumference of Circle = " << circumference << endl;
	return 0;
}
