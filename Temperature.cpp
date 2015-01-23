// This C++ program converts a Fahrenheit temperature to Celsius.
// Input:  Interactive
// Output: Fahrenheit temperature followed by Celsius temperature

#include <iostream>
using namespace std;

int main()
{
  double fahrenheit;
  double celsius;

  // prompt user
  cout << "Enter Fahrenheit temperature: ";
  // get interactive user input
  cin >> fahrenheit;
  // calculate celsius
  celsius = (fahrenheit - 32.0) * (5.0/9.0);

  // output
  cout << "\n\nFahrenheit temperature: " << fahrenheit << endl;
  cout << "Celsius temperature: " << celsius << endl;

  return 0;
}
