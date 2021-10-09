#include<iostream>
using namespace std;

class Add{
	int a;
	int b;
	public:
		Add(){
			a=b=0;
		}
	void input(){
		cout<< "Enter a & b :";
		cin>>a;cin>>b;
	}
	//operator overLoading
	Add operator +(Add A){
		Add temp;
		temp.a=a+A.a;
		temp.a=b+A.a;
		return temp;
	}
	void output(){
		cout<<"values of a is :"<<a<<endl;
		cout<<"values of b is :"<<b<<endl;
	}
};

int main(){
	Add c1,c2,result;
	cout<<"enter values of a and b according to 1st obj :\n";
	c1.input();
	cout<<"Enter values of a & b according to 2nd obj :\n";
	c2.input();
	result=c1+c2;
	cout<<"values of a & b after addition :\n";
	result.output();
	
	return 0;
}
