#include "Surgery.h"
#include <iostream>
#include <string>
using namespace std;
// Surgery Class
// Calculates and stores the cost of surgery based on a list of pre-set values
// Default constructor and mutator method were not used in the final solution

/* Default constructor
  sets all values to zero.*/
Surgery::Surgery(){
  type = 0;
  price = 0;
}
/* 
Overloaded constructor allows values to be set 
Features a switch statement that acts as a logic check,
as well as a storage for values.
*/
Surgery::Surgery(int t){
	while (t <= 0 || t > 5)
	{
		cout << "The number you entered does not match the list. Please try again: " << endl;
		cin >> t;
	}

	switch (t)
	{
	case 1: price = 13000; break;
	case 2: price = 60; break;
	case 3: price = 30; break;
	case 4: price = 80; break;
	case 5: price = 70; break;
  }
}

// Accessor and Mutator Methods
int Surgery::getPrice() {
  return price;
}

void Surgery::setPrice(int t){
	while (t <= 0 || t > 5)
	{
		cout << "The number you entered does not match the list. Please try again: " << endl;
		cin >> t;
	}

	switch (t)
	{
	case 1: price = 13000; break;
	case 2: price = 60; break;
	case 3: price = 30; break;
	case 4: price = 80; break;
	case 5: price = 70; break;
  }
}
