//Complex.h
#ifndef Complex_h
#define Complex_h

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Complex{
public:
  
  //Default Constructor
  Complex();
  //Regular Constructor
  Complex(double real, double imag);
  //Destructor
  ~Complex(){};
  //Conjugate
  Complex conj();
  //Getter Method
  //Real Part
  double real_part()  const {return real_;}
  //Imaginary part
  double imag_part() const {return imag_;}
  //magnitude
  double mag () const;
  //phase
  double phase() const;
  
  //Setter Method
  void setReal(double real){real_ = real;}
  void setImag(double imag){imag_=imag;}
  
  //Overloading Operators +,-,*,/ respectively

  Complex operator+ (const Complex& rhs) const;
  Complex operator- (const Complex& rhs) const;
  Complex operator* (const Complex& rhs) const;
  Complex operator/ (const Complex& rhs) const;
  
  //Interaction between Complex and double object
  Complex operator+(const double& rhs) const;
  Complex operator-(const double& rhs) const;
  Complex operator*(const double& rhs) const;
  Complex operator/(const double& rhs) const;

  //Overloading of =, +=,-=,*=, /=
  Complex operator=(const Complex& rhs) const;
  const Complex& operator+=(const Complex& rhs); 
  const Complex& operator-=(const Complex& rhs); 
  const Complex& operator*=(const Complex& rhs); 
  const Complex& operator/=(const Complex& rhs); 

  
  //using friend method to gloabl functions to access private data members
  friend Complex operator+(const double& lhs, const Complex& rhs);
  friend Complex operator-(const double& lhs, const Complex& rhs);
  friend Complex operator*(const double& lhs, const Complex& rhs);
  friend Complex operator/(const double& lhs, const Complex& rhs);
  

  //utility fuction
  void print(const std::string& complexnumber) const;
  
private:
  double real_;
  double imag_;
};

//we have to achieve symetry between Complex and double ie, Complex*double and double*complex
//Complex*double is already achieved. Because we can overload operator of type Complex.
//But  double*Complex means we need an operator of type double to  be overloaded. But we cannot overload built-in types
//So this s achieved by Global Function
//Global Function is declared in the Header file, outside the class scope and Implemented in Source File

//Complex operator+(const doube& lhs, const Complex& rhs);
#endif
