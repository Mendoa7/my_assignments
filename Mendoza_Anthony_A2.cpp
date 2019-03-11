//Anthony Mendoza
//CS 135
//Sect. 1004
//Assignment #2
#include <iostream>
#include <cmath>  //inputs square root
using namespace std;

int main()
{
  int x;  //Car A speed (MPH)
  int y;  //Car B speed (MPH)
  int hrs; //Hours in the elapsed time
  int min; //Minutes in the elapsed time
  double dist; //The output and distance between both cars

  //displays the user to put in the cars speed in MPH
  cout << "Enter the speed of Car A and car B: ";
  cin >> x >> y;

  //Displays the user to put in the hours and minutes
  cout << "Enter elapsed time (hours and minutes): ";  
  cin >> hrs >> min;

  cout << endl;

  //The formula to find the distance
  dist = sqrt(pow(x*(hrs + float(min)/60), 2) + pow(y*(hrs + float(min)/60), 2));

  //Outputs the distance between both cars
  cout << "The two cars are " << dist << " miles apart from each other" << endl;

  cout << endl;

  return 0;

}
