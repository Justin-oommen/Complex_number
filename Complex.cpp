//Complex.cpp
#include "Complex.h"

int main(){
  /*
  Complex z(3.15,-5.8);
  z.print("z");
  cout<<"Real Part ="<<z.real_part()<<endl;
  cout<<"Imaginary Part = "<<z.imag_part()<<endl;
  cout<< "Magnitude = "<<z.mag()<<endl;
  cout<<"Phase = "<<z.phase()<< endl;


  
  z.setReal(3);
  z.setImag(4);
  z.print("new z ");
  cout<<"Real Part ="<<z.real_part()<<endl;
  cout<<"Imaginary Part = "<<z.imag_part()<<endl;
  cout<< "Magnitude = "<<z.mag()<<endl;
  cout<<"Phase = "<<z.phase()<< endl;
  */
  //Interacting two Complex objects with overloaded operators

  Complex z1(2,3);
  Complex z2(1,2);

  z1.print("z1");
  z2.print("z2");
  
  Complex z3 = z1+z2;
  z3.print("z3");
  Complex z4 = z1-z2;
  z4.print("z4");
  Complex z5 = z1*z2;
  z5.print("z5");
  Complex z6 = z1/z2;
  z6.print("z6");

  Complex z7 = z1+2;
  z7.print("z7");
  Complex z8 = z1-2;
  z8.print("z8");
  Complex z9 = z1*2;
  z9.print("z9");
  Complex z10 = z1/2;
  z10.print("z10");

  Complex z11 = 2+z1;
  z11.print("z11");
  Complex z12 = 2-z1;
  z12.print("z12");
  Complex z13 = 2*z1;
  z13.print("z13");
  Complex z14 = 2/z1;
  z14.print("z14");
  
  return 0;
}
