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
  double mag (double real, double imag) const;
  //phase
  double phase(double real, double imag) const;
  
  
 private:
  double real_;
  double imag_;
};
