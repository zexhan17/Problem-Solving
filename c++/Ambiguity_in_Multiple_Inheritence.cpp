/*			

Ambiguity in Multiple Inheritence
   
	-Ambiguity is created in multiple inheritence if the names of functions are similar in two or more parent classes. The compiler cannot determine which function to execute when object of derived class attempts to execute such function. */



#include<iostream>
using namespace std;

//defining 1st class
class A{
	public:
		void show()
		{
			cout<<"class A "<<endl;
		}
};

//Definig 2nd class
class B{
	public:
		void show(){
			cout<<"class B "<<endl;
		}
};

//defining 3rd class and inherted to two classes
class C : public A , public B
{
	
	
	//remove comments if u want to use this method
	//another way to solve Ambiguity
	/*

	public:
		void show()
		{
			A::show();		
								// Here function show() is overridden
								// now whenever function is called class's C
								// function will call and execute
			B::show();			
			
			cout<<"class C "<<endl;
		}
	
	*/	
};

int main(){
	
	C obj;	//Declaring object of class C
	
	//obj.show();
					   		/* This will not work b.coz compiler cannot 
							determine which function to execute when parent 
					  		classes has same function name */
	
	//remove comments if u want to use this method
	
	
						//solving Ambiguity
	obj.A::show();
	obj.B::show();
	
	
	return 0;
}
