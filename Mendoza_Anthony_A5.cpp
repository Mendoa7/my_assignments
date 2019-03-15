//Anthony Mendoza
//Computer Science I
//1004
//Assignment #5
#include <iostream>
#include <iomanip>  //iomanip is back to display output

const double bon1 = 0.03; //3% commission on bonus
const double bon2 = 0.06; //6% commission on bonus
const int saleb1 = 10; //$10 bonus
const int saleb2 = 20; //$20 bonus

using namespace std;

int main()
{
  int years;        //variable for amount of years worked
  double salary;    //variable for the amount of employees salary in a month
  double sales;     //variable for the sales amount
  double bonus;     //variable for the sales bonus
  char YorN = 'Y';


  //YorN is for the continous loop
  while (YorN == 'Y')
    {
      cout << endl;
      //displays for the user to put in the amount
      cout << "Enter years worked: ";
      cin >> years;
 
      //loops the cin.fail
      while (years < 0 || cin.fail())
	{
	  cout << "Something went wrong..." << endl;
	  cout << endl;
	
	    if (cin.fail())
	      {
		cin.clear();
		cin.ignore(100, '\n');
	      }
      
	  cout << "Enter years worked: ";
	  cin >> years;
	}

      cout << "Enter monthly salary: ";
      cin >> salary;

      //limits the user from putting in 1500+, negatives, or words
      while (salary >= 1500 || salary < 0 || cin.fail())
	{
	  cout << "We both know that is not a valid salary..." << endl;
	  cout << endl;
      
	  if (cin.fail())
	    {
	      cin.clear();
	      cin.ignore(100, '\n');
	    }
	  cout << "Enter monthly salary: ";
	  cin >> salary;
	}

      cout << "Enter sales amount: ";
      cin >> sales;

      //loop prevents user from putting in any negatives and words
      while (sales < 0 || cin.fail())
	{
	  cout << "Are you giving things away for free?!" << endl;
	  cout << endl;

	  if (cin.fail())
	    {
	      cin.clear();
	      cin.ignore(100, '\n');
	    }
	  cout << "Enter sales amount: ";
	  cin >> sales;
	}

      //calculation that gives base bonus
      if (years <= 5)
	bonus = years * saleb1;
      else if (years > 5)
	bonus = years * saleb2;

      //calculation that gives sales bonus
      if (5000 <= sales && sales < 10000)
	bonus = bonus + (bon1 * sales);
      else if (10000 <= sales)
	bonus = bonus + (bon2 * sales);

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
      

      cout << endl;
      cout << "Do we have more employees ? ( Y / N ): ";
      cin >> YorN;
      
      //cin only accepts either y or n
      if (YorN == 'y')
	{
	  YorN = toupper(YorN);
	}
      else if (YorN == 'n' || YorN == 'N')
	{
	  return 0;
	}

      //if any letter is inserted other than y or n it repeats the question and the if and else statement
      while (YorN != 'Y' || cin.fail())
	{
	  if (cin.fail())
	    {
	      cin.clear();
	      cin.ignore(100, '\n');
	    }

	  cout << "Do we have more employees ? ( Y / N ): ";
	  cin >> YorN;
      
	  YorN = toupper(YorN);
	  
	  if (YorN == 'y')
	    {
	      YorN = toupper(YorN);
	    }
	  else if (YorN == 'n' || YorN == 'N')
	    {
	      return 0;
	    }
	}
      
    }
}
