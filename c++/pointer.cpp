#include <iostream>
using namespace std;
int main(){
	string a="D";
	cout<<a<<endl;
	cout<<&a<<endl;
	string *p;
	p=&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	
	return 0;
}
