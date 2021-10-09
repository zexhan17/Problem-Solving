/*
	
VIRTUAL BASE CLASSES
	A class that is inherited by child classes using virtual keyword 
	is called virtual base class. The virtual base classes are necessary 
	in a situation where the member of base class is duplicated in multilevel inheritance.
	 
*/




#include <iostream>
using namespace std;

//Declaring four classes "parent,child1,child2,baby"

class Parent{
	protected: 		//protected acces specfier can be inherited by its own child classes by default
		int n;		//declaring data member
};
class Child1 :virtual public Parent		//Both child1, Child2 classes makes copy of 'n' data member
										//after writing virtual copy of n.now compiler execute the original n data member
{
};
class Child2 :virtual public Parent
{
};
class Baby : public Child1, public Child2
{
	public:
		void set(){
			n = 10;
			cout<<"n = "<<n<<endl;
		}
};

int main(){
	
	Baby a; 	//creating object of class baby
	a.set();	//calling set function
	
}


