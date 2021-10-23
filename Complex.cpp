//Complex.cpp
#include "Complex.h"

int main(){

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
  
  return 0;
}
