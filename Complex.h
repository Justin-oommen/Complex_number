//Complex.h
//#ifndef Complex_h
//#define Complex_h

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
  
  //utility fuction
  void print(const std::string& complexnumber) const;
  
private:
  double real_;
  double imag_;
};
