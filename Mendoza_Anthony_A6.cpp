//Anthony Mendoza
//Computer Science I
//1004
//Assignment #6
#include <iostream>
using namespace std;

int main()
{
  int val1; //variable for the first value
  int val2; //variable for the second value
  int ans;  //variable for the answer
  int i;    //i for the count
  int mod;  //variable for modulus
  int quot; //variable for the quotient
  char func;  //variable for the function or expression
  char cont = 'C';  //variable for the loop that continues the program

    while (cont == 'C')
      {
	cout << endl;
	//the statement that allows the user to put in an input
	cout << "Enter the expression to run the calculator simulator" << endl;
	cin >> val1 >> func >> val2;

	//while loop restates the statement if the user puts in a word
	while (cin.fail())
	  {
	    cout << "Invalid Expression!" << endl;
	    cin.clear();
	    cin.ignore(100, '\n');
	    cout << endl;
	    cout << "Enter the expression to run the calculator simulator" << endl;
	    cin >> val1 >> func >> val2;
	  }
	
	//switch is used calculate whatever expression the user puts in
	switch(func)
	  {
	  case '+':  //calculates addition and outputs the result
	    ans = val1 + val2;
	    cout << endl;
	    cout << "The result is " << ans << endl;
	    break;
	  case '-':  //calculates subtraction and outputs the result
	    ans = val1 - val2;
	    cout << endl;
	    cout << "The result is " << ans << endl;
	    break;
	  case '*':  //calculates multiplication and outputs the reslt
	    ans = 0;
	    for (i = 0; i < val1; i++)
	      {
		ans = ans + val2;
	      }
	    cout << endl;
	    cout << "The result is " << ans << endl;
	    break;
	  case '/':  //calculates division and outputs the result
	    for (i = 0; (val1 - val2) >= 0; i++)
	      {
		val1 = val1 - val2;
	      }
	    ans = i;
	    cout << endl;
	    cout << "The result is " << ans << endl;
	    break;
	  case '%':  //calculates modulus
	    for (i = 0; (val1 - val2) >= 0; i++)
	      {
		val1 = val1 - val2;
		quot = i;
	      }
	    mod = 0;
	    for (int j = 0; j == quot; j++)
	      {
		mod = mod + val2;
	      }
	    ans = val1 - mod;
	    cout << endl;
	    cout << "The result is " << ans << endl;
	    break;
	  default:  //if user puts the wrong expression
	    cout << "Invalid Expression!" << endl << endl;
	    break;
	  }
	
	//gives user the option to continue or not
	cout << "Clear out calculator ( C ) or turn off ( O ): ";
	cin >> cont;

	if(cont == 'c')
	  {
	    cont = toupper(cont);
	  }
	else if (cont == 'o' || cont == 'O')
	  {
	    return 0;
	  }
	
	//loops statement if user enters c or o
	while(cont != 'C' || cin.fail())
	  {
	    cin.clear();
	    cin.ignore(100, '\n');
	    cout << "Clear out calculator ( C ) or turn off ( O ): ";
	    cin >> cont;
	    if(cont == 'c')
	      {
		cont = toupper(cont);
	      }
	    else if (cont == 'o' || cont == 'O')
	      {
		return 0;
	      }

	  }
	
      }
}
