#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

int main()
{
  double area1, area2;
  double circumference1, circumference2;
  double radius1, radius2;

  cout << "Enter the radius of two circles: ";
  cin >> radius1 >> radius2;

  area1 = pow(radius1, 2) * PI;
  area2 = pow(radius2, 2) * PI;
  
  circumference1 = 2 * PI * radius1;
  circumference2 = 2 * PI * radius2;

  cout << "Area of circle 1: " << area1 << endl;
  cout << "Area of circle 2: " << area2 << endl;

  cout << endl;

  cout << "Circumference of circle 1: " << circumference1 << endl;
  cout << "Circumference of circle 2: " << circumference2 << endl;

  return 0;
}
