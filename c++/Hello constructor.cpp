#include <iostream>
using namespace std;
//Making structer
struct node {
	int val;
	node *next;
};

//functions Declaration
node* create_node(node* current, int val);

void output(node* head);

void delete_node(node* current);

int sum(node* h);



//Main
int main(){
	node * h;
	h = new node;
	h-> val = 1;
	h-> next = NULL;
	
	node *current;
	current = h;
	
	current = create_node(current , 3);
	current = create_node(current , 5);
	current = create_node(current , 7);
	
	output(h);
	
	cout<<"Sum is : "<<sum(h)<<endl;  
	
	current = h->next;
	delete_node(current);
	output(h);
	
	current = h->next;
	delete_node(current);
	output(h);

	current = h;
	delete_node(current);
	output(h);
	
	return 0;
}



//Functions Initialization
//1st
node *create_node(node *current, int val){
	node *n;
	n=new node;
	 
	n->val  = val;
	n->next = NULL;
	 
	current->next =n;

	return n; 
}
//2nd
void output(node* head){
	node* current = head;
	cout<<"[ ";
	while (current !=NULL){
		cout<<current->val<<" ";
		
		current =current->next;
	}
	cout<<" ]"<<endl;
}
//3rd
void delete_node(node* current){
	
	node* temp;
	
	temp = current->next;
	cout<<"Going to delete node :"<< current->next->val<<endl;
	current->next = current->next->next;
	
	delete temp;
}
//4th
int sum(node* h){
	node* current = h;
	int sum=0;
	while (current !=NULL){
		
		sum= sum + current->val;
		
		current =current->next;
	}
	return sum;
}
