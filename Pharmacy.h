#ifndef PHARMACY_H
#define PHARMACY_H
#include <iostream>
#include <string>
using namespace std;

class Pharmacy {
  private:
    int price, type;
  public:
    Pharmacy();
    Pharmacy(int t);
    void setPrice(int t);
    int getPrice();
};

#endif