//Anthony Mendoza
//Computer Science I
//1004
//Assignment #4
#include <iostream>
#include <iomanip>  //iomanip is back to display output

using namespace std;

int main()
{
  int years;        //variable for amount of years worked
  double salary;    //variable for the amount of employees salary in a month
  double sales;     //variable for the sales amount
  double bonus;     //variable for the sales bonus

  cout << endl;
  
  //displays for the user to put in the amount
  cout << "Enter years worked: ";
  cin >> years;

  //shuts down the program if the user puts in a word or negative
  if (years < 0 || cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Positives numbers only, dude!" << endl;
      cout << endl;
      return 0;
    }

  cout << "Enter monthly salary: ";
  cin >> salary;

  //limits the user from putting in 1500+, negatives, or words
  if (salary >= 1500 || salary < 0 || cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "We both know that is not a valid salary..." << endl;
      cout << endl;
      return 0;
    }

  cout << "Enter sales amount: ";
  cin >> sales;

  //prevents user from putting in any negatives and words
  if (sales < 0 || cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Are you giving things away for free?!" << endl;
      cout << endl;
      return 0;
    }

  //calculation that gives base bonus
  if (years <= 5)
    bonus = years * 10;
  else if (years > 5)
    bonus = years * 20;

  //calculation that gives sales bonus
  if (5000 <= sales && sales < 10000)
    bonus = bonus + (0.03 * sales);
  else if (10000 <= sales)
    bonus = bonus + (0.06 * sales);

  cout << endl;

  //output for the Monthly Earnings
  cout << "Monthly Earnings" << endl;
  cout << "-------------------------------" << endl;
  
  cout << setw(20) << left << "Years worked";
  cout << setw(11) << right << years << endl;
  
  cout << setw(20) << left << setfill('.') << "Base salary";
  cout << "$";
  cout << setw(10) << right << setfill(' ') << setprecision(2) << fixed << salary << endl;

  //if bonus is zero then Bonus and salary bonus output display is removed
  if (bonus == 0)
    {
      cout << setw(20) << left << setfill('.') << "Amount sold";
      cout << "$";
      cout << setw(10) << right << setfill(' ') << setprecision(2) << fixed << sales << endl;
    }
  else
    { 
      cout << setw(20) << left << setfill('.') << "Bonus";
      cout << "$";
      cout << setw(10) << right << setfill(' ') << setprecision(2) << fixed << bonus << endl;

      cout << setw(20) << left << setfill('.') << "Amount sold";
      cout << "$";
      cout << setw(10) << right << setfill(' ') << setprecision(2) << fixed << sales << endl;
  
 
      cout << setw(20) << left << setfill('.') << "Salary w/ bonus";
      cout << "$";
      cout << setw(10) << right << setfill(' ') << setprecision(2) << fixed << salary + bonus << endl;
    }  
 return 0;
 }
    
      
