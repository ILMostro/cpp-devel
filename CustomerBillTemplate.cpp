/* Program Name:  CustomerBill.cpp
 * Function: This program uses afunction to print a company name and
 * address and then prints a customer name and balance.
 * Input: Interactive
 * Output: Company name and address, customer name and balance
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Declare variables local to main
  string firstName;
  string lastName;
  double balance;
  // get interactive input
  cout << "Enter customer's first name: ";
  cin >> firstName;
  cout << "Enter customer's last name: ";
  cin >> lastName;
  cout << "Enter customer's balance: ";
  cin >> balance;

  // Call nameAndAddress function
  nameAndAddress();
  // Output customer name and address
  cout << "Customer Name:  " << firstName << " " << lastName << endl;
  cout << "Customer Balance: " << balance << endl;

  return 0;
}
