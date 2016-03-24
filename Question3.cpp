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
	friend bool operator > (Fraction, Fraction);
	friend Fraction add(Fraction,int);
	friend Fraction add(int,Fraction);
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
};

//3.1
bool operator > (Fraction F1, Fraction F2)
{
	bool something =((float) F1.num /F1.denom) >((float) F2.num /F2.denom);
	return something;
}

//3.2
Fraction add(Fraction frac, int n)
{
	frac.num = n*frac.denom + n;
	return frac;
}
Fraction add(int n,Fraction frac)
{
	frac.num = n*frac.denom + n;
	return frac;
}
int main()
{
	Fraction frac(1, 2), frac2(1, 4);
	bool i;
	frac.print();
	cout << "\n" << (frac > frac2) << endl; //testing the overloaded greater than operator
	frac = add(frac2, 1);	//testing the overloaded add function
	frac.print();
	cout << "\n";
	frac = add(1,frac2);	
	frac.print();
}