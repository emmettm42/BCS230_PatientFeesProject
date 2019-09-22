#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class PatientAccount{
  private:
    int days, total, housing;
  public:
    PatientAccount();
    PatientAccount(int d);
    int getTotal();
    void updateTotal(int n);
    int getHousingCost();
    void setDays(int d);
    int getDays();
};

#endif