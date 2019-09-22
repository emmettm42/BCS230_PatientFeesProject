#ifndef SURGERY_H
#define SURGERY_H
#include <iostream>
#include <string>
using namespace std;

class Surgery{
  private:
    int price, type;
  public:
    Surgery();
    Surgery(int t);
    int getPrice();
    void setPrice(int t);
};

#endif