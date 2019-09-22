#include "PatientAccount.h"
#include <iostream>
#include <string>
using namespace std;
/*
PatientAccount class
Stores the days spent in the hospital, the cost of stay, and the total bill
*/

/*
Constructors
Default Constructor is never used
Overloaded Constructor used to calculate the cost of housing
*/
PatientAccount::PatientAccount()
{
  days = 0; housing = 0; total = 0;
}

PatientAccount::PatientAccount(int d){
  days = d; housing = days * 2000; total = housing;
}

// Accessor and Mutator Methods 
int PatientAccount::getTotal(){
  return total;
}

void PatientAccount::updateTotal(int n){
  total += n;
}

int PatientAccount::getHousingCost(){
  return housing;
}

void PatientAccount::setDays(int d){
  days = d;
}

int PatientAccount::getDays(){
  return days;
}
