#include<iostream>
#define SIZE 5
using namespace std;

class Queue{
		int list[SIZE];
		int i = 0;
		int o = 0;
		bool is_empty = true;
		bool is_full = false;
	public:
		int inc(int idx){
			if(idx + 1 == SIZE){
				return 0;
			}
			else
			{
				return idx + 1;
			}
		}
		int enqueue(int val){
			if(is_full){
				cout << " Queue full, cannot enqueue."<<endl;
				return 0;
			}
			list[i] = val;
			cout << val << " EnQueue."<<endl;
			i = inc(i);
			
			if(i == o){
				is_full = true;
			}
			is_empty = false;
		}
		
		int dequeue(){
			if(is_empty){
				cout << " Queue empty. cannot dequeue." << endl;
				return 0;
			}
			int ret;
			ret = list[o];
			cout << ret << " DeQueue."<<endl;
			o = inc(o);
			
			if(i == o){
				is_empty = true;
			}
			is_full = false;
			return ret;
		}
		
};
int main(){
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	
	return 0;
}
