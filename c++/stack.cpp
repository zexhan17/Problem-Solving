#include<iostream>
#define SIZE 5
using namespace std;

class stack{
		int list[SIZE];
		int top = -1;
		bool is_empty = true;
		bool is_full = false;
	public:
		int push(int n){
			if(is_full){
				return 0;
			}
			top += 1;
			list[top] = n;
			cout << n << " Inserted."<<endl;
			return 0;
		}
		int pop(){
			if(is_empty){
				return 0;
			}
			int temp = list[top];
			cout << temp << " Popped."<<endl;
			top -= 1;
			return temp;
		}
		void displayitems(){
			cout << "Items in stack: "<< endl;
			for(int i= top; i>=0; i--){
				cout << list[i] <<"  "; 
			}
			cout << endl;
		}
};

int main(){
	stack stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.push(5);
	stk.push(6);
	/*
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	*/
	return 0;
}
