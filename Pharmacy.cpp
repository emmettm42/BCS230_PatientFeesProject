#include "Pharmacy.h"
#include <iostream>
#include <string>
using namespace std;
// Pharmacy Class
// Calculates and stores the cost of pharmacy based on a list of pre-set values
// Default constructor and mutator method were not used in the final solution

/* Default constructor
  sets all values to zero.*/
Pharmacy::Pharmacy(){
  type = 0;
  price = 0;
}
/* 
Overloaded constructor allows values to be set 
Features a switch statement that acts as a logic check,
as well as a storage for values.
*/
Pharmacy::Pharmacy(int t){
	while (t <= 0 || t > 5)
	{
		cout << "The number you entered does not match the list. Please try again: " << endl;
		cin >> t;
	}

	switch (t)
	{
	case 1: price = 120; break;
	case 2: price = 275; break;
	case 3: price = 300; break;
	case 4: price = 325; break;
	case 5: price = 400; break;
  }
}

// Accessor and Mutator Methods
int Pharmacy::getPrice() {
  return price;
}

void Pharmacy::setPrice(int t){
	while (t <= 0 || t > 5)
	{
		cout << "The number you entered does not match the list. Please try again: " << endl;
		cin >> t;
	}

	switch (t)
	{
	case 1: price = 120; break;
	case 2: price = 275; break;
	case 3: price = 300; break;
	case 4: price = 325; break;
	case 5: price = 400; break;
}
}
