#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
double radius;
cout << "Enter the radius of the circle: ";
cin >> radius;

Circle myCircle(radius);

cout << "The area of the circle is: " << myCircle.getArea() << endl;
cout << "The diameter of the circle is: " << myCircle.getDiameter() << endl;
cout << "The circumference of the circle is: " << myCircle.getCircumference() << endl;

return 0;
}