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

//Complex Conjugate
Complex Complex:: conj() {
  return Complex(real_,-imag_);
}
//Magnitude of a complex number 
double Complex:: mag () const{
  return sqrt (pow (real_,2)+pow(imag_,2) );

}
//Argument of a complex number
double Complex::phase() const{
  return atan(imag_/real_);
}

void Complex::print(const std::string& complexnumber) const {
  cout << complexnumber <<" = "<< real_ <<"+ i("<<imag_<<")"<<endl;
}
//Overloading + operator
Complex Complex::operator+( const Complex& rhs) const{
  //sum of real part
  //( x1 + iy1 )+( x2 + iy2 )= (x1+x2) + i(y1+y2)
  double real= real_ + rhs.real_;
  //sum of imaginary part
  double imag = imag_ + rhs.imag_;

  //result of sum
  return Complex (real, imag);
}
// overloading - operator
Complex Complex::operator-(const Complex& rhs) const{
  //Difference between real part
  //( x1 + iy1 )-( x2 + iy2 )= (x1-2) + i(y1-y2)
  double real = real_ - rhs.real_;
  //Difference between imaginary part
  double imag = imag_ - rhs.imag_;
  //Result of Substraction
  return Complex(real,imag);
  
}
//Overloading *operator
Complex Complex::operator*(const Complex& rhs) const{
  //( x1 + iy1 )*( x2 + iy2 )= (x1x2 -y1y2) + i(x1y2 + x2 y1)

  //product of real part
  real = (real_*rhs.real_) - (imag_*rhs.imag_);
  //product of imaginary part
  imag = (real_*rhs.imag_) + (rhs.real_*imag_);
  //Result of the product
  return Complex(real,imag);
}
//Overloading /operator
Complex Complex::operator/(const Complex& rhs) const{
  //( x1 + iy1 )/( x2 + iy2 )=[ (x1x2 +y1y2) + i(x2y1 - x1 y2) ]/ (x2^2 + y2^2)

  //Real part
  real = ((real_*rhs.real_)+(imag_*rhs.imag_))/(pow(rhs.real_,2)+pow(rhs.imag_,2));
  //Imaginary part
  imag = ((rhs.real_*imag_)-(real_*rhs.imag_))/(pow(rhs.real_,2)+pow(rhs.imag_,2));
  //Result of the Division
  return Complex(real,imag);
}

//Interaction between Complex and Double
//Addition of double on rhs
Complex Complex::operator+(const double& rhs) const{
  return Complex(real_+rhs,imag_);
}
//Substraction of double on rhs
Complex Complex::operator-(const double& rhs) const {
  return Complex(real_-rhs,imag_);
}
//Multiplication of double on rhs
Complex Complex::operator*(const double& rhs) const {
  return Complex (real_*rhs,imag_*rhs);
}
//Division of double on rhs
Complex Complex::operator/(const double& rhs) const {
  return Complex(real_/rhs,imag_/rhs);
}

//global functions
Complex operator+(const double& lhs, const Complex& rhs){
  return Complex (lhs+rhs.real_,lhs+rhs.imag_);
}
Complex operator-(const double& lhs, const Complex& rhs){
  return Complex (lhs-rhs.real_,lhs-rhs.imag_);
}
Complex operator*(const double& lhs, const Complex& rhs){
  return Complex (lhs*rhs.real_,lhs*rhs.imag_);
}
Complex operator/(const double& lhs, const Complex& rhs){
  //Complex c= rhs.conj(); //conjugate of the complex number
  double m = rhs.mag(); //magnitude of the complex number
  return Complex ((lhs*rhs.real_)/m, (lhs*rhs.imag_)/m);
}
