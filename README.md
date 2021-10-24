# Complex_number
This is the frst lab session exercise on creating a class of Complex and for it's operation.

- The first exercise includes to create a class of Complex numbers
- Define appropriate data members
- Define Constructors
- Define Getter, Setter
- Define the Data Members (Funtions) --> Re(), Im(), Mag(), Phase(), r(), phi()
-Overloading operators
	     - We want to achieve the property Complex z1(a,b) z2(c,d);
	       	  then Complex z = z1+z2;
		 Since the operators available for operation in c++ is for built-in types like double , int in which we can perform the above operation easily.
		 But for custom objects like Complex this is not possible. Luckly C++ allows us to implement such built in types for our user defined types (here classess). This is called overloading of operators.
	     - Inorder to overide '+' we have a special Keyword --> operator+ in C++
	       	syntax --->  Complex operator+ (const Complex& rhs) const;
		Note:- here the function is constant because we don't want to modify the data member of the object that we're applying to (eg: z1.operator+(z2); here function operator+ takes a Complex object as input and apply it to another complex object z1. using cosnt will not modify the z1)
		Same thing can be done for other operators as well
	    
	    - After this we have to look to the interaction between a Complex and double and try to achieve symmetry in the operation.
	      ie, Complex z2= z1*2 and Complex z3 = 2*z1 must give same result.

	      The former one can be achieved by using the syntax ---> Complex operator* (const double& rhs) const;
	      However in the latter one operator* is applied to a double. ie, we need to overload operator* of type double. Unfortunately we cannot overload operators for built in types.
	      To solve that we use Global Function which is declared in the header file, outside the class scope and the implemented in the source file. We could also use 'friend method' for global functions to access private data members without being a member function.
		 		 	 

- So we have to create a header file(Declearations. ie, Rules of the game) --> Complex.h
- Then a source file(Implementation. ie, How the game works)---> Complex.cc
- Finally a main file (to check the game actually works)---> Complex.cpp