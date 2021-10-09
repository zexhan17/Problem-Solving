#include<iostream>
#include<limits.h>
#include<float.h>
using namespace std;
void find_limits();


int main(){
	
	find_limits();
	return 0;
}


void find_limits(){
	cout << "int max is :" << INT_MAX <<"\n\n" ;
	cout << "long max is :" << (long long) LONG_LONG_MAX <<"\n\n";
	cout << "float max is :" << FLT_MAX <<"\n\n";
	cout << "double max is :" << DBL_MAX <<"\n\n";
	
}
