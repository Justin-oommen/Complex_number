//Complex.cc
#include "Complex.h"
#include<iostream>
#include <cmath>
using std::cout;
using std::endl;

Complex::Complex (){
  real_ = 0.;
  imag_ = 0.;
}

Complex::Complex(double real, double imag){
  real_ = real;
  imag_ = imag;
}

double Complex:: mag (double real, double imag){
  return sqrt (pow (real_,2)+pow(imag_,2) );

}

double Complex::phase(double real, double imag){
  return atan(real_/imag_);
}

void Complex::print(const std::string& complexnumber) const {
  cout << "complex number ="<< real_ <<" + "<<"i("<<imag_<<")"<<endl;
}