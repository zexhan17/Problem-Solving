#include <iostream>
using namespace std;
struct Student{
	string name;
	int roll_number;
};
int main(){
	Student arr[3];
	for(int i=0; i<3;i++){
		string a=" ";
		cout<<"enter a name : ";
		cin>>a;
		arr[i].name=a;
		int b=0;
		cout<<"Enter a roll_number : ";
		cin >> b;
		arr[i].roll_number=b;
	}
	cout<<endl;
	cout<<endl;
	for(int i=0; i<3;i++){
		cout<<"Name is :"<< arr[i].name << endl;
		cout<<"Roll number of "<<arr[i].name<<" is :"<< arr[i].roll_number << endl;
	}
	return 0;
}
