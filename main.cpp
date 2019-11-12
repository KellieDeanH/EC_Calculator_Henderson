/*
EC_Calculator_Henderson 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<cmath>
#include<iomanip>
#include<sstream> //for string manipulation and comparison
using namespace std;

void calculator (double&, double&); 
void showMenu();
void handleOption();
void addition(double&,double&);
void multiplication (double&,double&);
void division (double&, double&);
void subtraction(double&, double&);

int main()
 {
  string option = " ";
  char op = '\0';
  double n1 = 0.00;
  double n2 = 0.0;
  double sum = 0.00;
  cout << fixed << setprecision(3) << endl;
handleOption();
calculator(n1,n2);
//showMenu();


/*addition(n,n);
multiplication (n,n);
division (n,n);
subtraction(n,n);*/

    return 0;
}



void calculator(double &n1, double &n2)
{ 
  
//double n = 0.00;
cout << "Lets make some calculations!" << endl;
n1 = validateDouble(n1);

cout << "Enter your second number:" << endl;
n2 = validateDouble(n2);
// output the operation to the screen with the result.
cout << "you have entered: " << n1 << " and: " << n2 << ".\n what would you like them to do?\n Please select from the menu." << endl;

}

void showMenu()
{ 
  string option = "";
   cout << "Please choose an option from the menu: " << endl;
  cout << "A: Addition" << endl;
  cout << "B: Multiplication" << endl;
  cout << "C: Division" << endl;
  cout << "D: Subtraction" << endl;
  cout << "E: Exit" << endl;
  cout << "X: Clear screen " << endl;

 // option = validateString(option);

}



void handleOption()
{
string option = "";

  do{
  showMenu();
  //cout << "Please choose an option: " ;
  option = validateString(option);//cin >> option;
  if( option == "A" || option == "a")
  {
    double n1, n2;
    cout << "Num1: " ;
    n1 = validateDouble(n1);
    cout << "Num2: ";
    n2 = validateDouble(n2);
     addition(n1,n2);
  }
  else if(option == "b" || option == "B")
  {
     double n1, n2;
    cout << "Num1: " ;
    n1 = validateDouble(n1);
    cout << "Num2: ";
    n2 = validateDouble(n2);
    multiplication(n1,n2);
  }
  else if(option == "c" || option == "C")
  {double n1, n2;
    cout << "\nWhich number would you like to divide by?" << endl;
    cout << "A." << n1 << endl;
    cout << "B." << n2 << endl;
  option = validateString(option);
   
    cout << "Num1: " ;
    n1 = validateDouble(n1);
    cout << "Num2: ";
    n2 = validateDouble(n2);
    division(n1,n2);
  }
  else if(option == "D" || option == "D")
  { double n1, n2;
    cout << "\nWhich number would you like to subtract from?" << endl;
    cout << "A." << n1 << endl;
    cout << "B." << n2 << endl;
    cout << "Num1: " ;
    n1 = validateDouble(n1);
    cout << "Num2: ";
    n2 = validateDouble(n2);
  option = validateString(option);
    subtraction(n1,n2);
  }
  else if (option == "x" || option == "X")
  {
    cout<< "\033[2J\033[1;1H";
  }
  else if(option =="E" || option == "e")
  {
    cout << "Bye" << endl;
  }
 
  else
  {
    cout << "Please enter a valid option";
  }
  }while(option != "e" && option != "E");

}


void addition(double &n1,double &n2)
{
  double sum = 0.00; 
  cout << "The sum of your numbers is: " << (sum = n1 + n2)<< " ." << endl;
}





void multiplication (double &n1,double &n2)
{ double sum = 0.00;

  cout << "The sum of your numbers is: " << (sum = (n1 * n2)) << " ." << endl;
}


void division (double &n1,double &n2)
{double sum = 0.00;
string option = "";
 if(option == "a" || option == "A")
 {
   cout << (sum = (n1 / n2));
 }
 else if (option == "b"|| option == "B")
 {
  cout << "The sum of your numbers is: " << (sum = (n2/n1)) << " ." << endl;
 }
}
void subtraction(double &n1,double &n2)
{
  double sum = 0.00;
  string option = "";
 if(option == "a" || option == "A")
 {
  cout << "The sum of your numbers is: " << (sum = (n1 - n2)) << " ." << endl;
 }
 else if (option == "b"|| option == "B")
 {
   cout << "The sum of your numbers is: " << (sum = (n2-n1)) << " ." << endl;
 }

}
