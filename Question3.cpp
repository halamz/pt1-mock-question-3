///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Halalisile Mzobe
// Student No:214519970
// Date: 23/03/2016
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	friend ostream& operator<<(ostream& os, const Fraction& frac);
	Fraction(int n, int d) : num(n), denom(d) { };
	// print() { cout << num << "/" << denom; };

};

ostream& operator<<(ostream& os, const Fraction& frac)
{
	os << frac.num << "/" << frac.denom;
}