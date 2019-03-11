//Anthony Mendoza
//Computer Science I
//1004
//Assignment 3
#include <iostream>
#include <iomanip> //iomanip is included to align the output
using namespace std;

double const netprof = 0.10; //constant for net profit
double const sale = 0.15; //constant for sale discount

int main()
{
  double cost; //variable for merchandise cost
  double salary; //variable for employees' salary
  double rent; //variable for the rent cost
  double eCost; //variable for cost of electricity
  double expenses; //variable for the yearly expenses
  double markup; //variable for the merchandise markup percentage
  double mk_cost; //variable for the mark up cost
  double discount; //variable for the merchandise cost after the discount

  //displays the user to put in the cost for the variables
  cout << "Enter the cost for merchandise: ";
  cin >> cost;

  cout << "Enter salary: ";
  cin >> salary;

  cout << "Enter yearly rent: ";
  cin >> rent;

  cout << "Enter electric cost: ";
  cin >> eCost;

  cout << endl;
  cout << endl;

  //functions for the outputs
  expenses = cost + salary + rent + eCost;
  markup = (((expenses * netprof) / cost) * 100);
  mk_cost = cost + (expenses * netprof);
  discount = mk_cost - (mk_cost * sale);

  //output for the the yearly expenses
  cout << left << setw(30) << setfill('.') << "Yearly expenses";
  cout << "$";
  cout << right << setw(20) << setfill(' ') << fixed << setprecision (2) << expenses << endl;

  //output for the merchandise markup percentage
  cout << left << setw(30) << "Merchandise markup";
  cout << right << setw(21) << fixed << setprecision (2) << markup << "%" << endl;
  
  //output for the merchandise marked up cost
  cout << left << setw(30) << setfill('.') << "Merchandise marked up cost";
  cout << "$";
  cout << right << setw(20) << setfill(' ') << fixed << setprecision (2) << mk_cost << endl;

  //output for the merchandise after the discount is applied
  cout << left << setw(30) << setfill('.') << "Merchandise after discount";
  cout << "$";
  cout << right << setw(20) << setfill(' ') << fixed << setprecision (2) << discount << endl;

  return 0;

}
