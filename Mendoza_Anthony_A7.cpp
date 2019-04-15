//Anthony Mendoza
//CS 135 1004
//Assignment #7
#include <iostream>
#include <iomanip>
using namespace std;

double getInput(string); //function to display string message and returns the amount read by the user
double computeBillingAmount(double, int, double); //function for the calculations for the billing amount
void outputLine(string, int, double, int); //function displays the output

int main()
{
  double a, x, y; //variable for billing amount, total income and hourly rate
  int z; //variable for consulting time

  x = getInput("Enter total income: ");  //displays the income
  y = getInput("Enter hourly rate: ");   //displays the hourly rate
  z = getInput("Enter consulting time (minutes): ");  //displays the consulting time
  a = computeBillingAmount(x, z, y);  //computes the billing amount

  cout << endl;
  outputLine("Income", 20, x, 10);          //outputs the income
  outputLine("Hourly rate", 20, y, 10);     //outputs the hourly rate
  outputLine("Billing Amount", 20, a, 10);  //outputs the billing amount
  cout << endl;
  
  return 0;
}

double getInput(string msg)
{
  double num; //num is declared for cin
  
  cout << endl; 
  
  cout << msg;
  cin >> num;  
  while (num <= 0 || cin.fail())  //if user enters the 0 and less or words it will reprompt message
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << msg;
      cin >> num;
    }

  return num; //num will return the variable declared
}

double computeBillingAmount(double totalIncome, int consultingTime, double hourlyRate)
{
  double billAmt; //billAmt is used to declare the calculations
  if (totalIncome <= 25000) //if user makes less than $25,000 they get a fixed adjustment
    {
      //if the user consulting time is over 30 users have to pay a fixed amount otherwise no fees
      if (consultingTime > 30)
          billAmt = (hourlyRate * 0.40 * ((consultingTime - 30.00)/60.00)); 
      else
        billAmt = 0;
    }
  else
    {
      //anyone who makes over 25,000 and it's consulting time is over 20 min has to pay a fixed amount otherwise no fees
      if (consultingTime > 20)
        billAmt = (hourlyRate * 0.70 * ((consultingTime - 20.00)/60.00));
      else
        billAmt = 0;
     }
  return billAmt;
}

void outputLine(string msg, int msgLen, double amount, int amtLen)
{
  //displays the output using iomanip
  cout << setw(msgLen) << left << setfill('.') << msg;
  cout << "$";
  cout << setw(amtLen) << right << setfill(' ') << fixed << setprecision(2) << amount << endl;
  return;
}
