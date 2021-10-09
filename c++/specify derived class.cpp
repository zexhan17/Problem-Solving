/*
Specifying a Derived Class:
						Specifying derived class is same as specifying a simple class.
						Reference of parent class is specified along with derived class
						name to inherit the capabilities of parent class.
						
Syntax:
	class sub_class : access_specifier  parent_class
	{
	body of class;
	};



*/

#include <iostream>			//Header file
using namespace std;

class Move{				//  Declaring class
	protected:			//	access specifier it s accessible from derived class
		int p;
	public:				// acccess specifier
		Move(){			// constructor
			p = 0;		// initializing
		}
		void forward(){	//function declaration
			p++ ;		// increment
		}
		void show(){
			cout <<"P = "<< p <<endl;	//display the value
		}
};	//End of class

//Declaring 2nd class and inheriting Move class
class Move2 : public Move
{
	public:
		void backward()		//defining function for decrement
		{
			p-- ;
		}
};	//End of class

int main(){
	Move2 m;	//declaring object of child class
	m.show();	//calling show funtion of parent class
	
	m.forward();	// calling forward function of parent class for increment
	m.show();
	
	m.backward();  // function of child class for decrement
	m.show();
	
	return 0;
}
/*

Declaring two classes "Move" & "Move2".
class Move is parent with data member "p" as protected so that it may be accessed in derived class.
child class "Move2" derives parent class "Move" & decalares  a member function.

creating object of child class constructor will assign value (p=0) and show function will show p=0
then forward function increment in p and show p=1
then backward function will decrement and again value of p=0

*/
