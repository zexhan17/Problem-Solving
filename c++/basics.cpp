#include <iostream>
using namespace std;

int main(){
	char c;
	cout <<"Enter a character : ";
	cin >> c ;
	cout <<"ASCII value of : "<< c << " is " <<int(c)<<endl;
	int num;
	cout <<"Enter a num : ";
	cin >> num ;
	cout <<"This number is of : " << (char)num <<endl;
	
	cout << "Size of char  		 : " << sizeof(char) << " byte" << endl;
    cout << "Size of int   		 : " << sizeof(int) << " bytes" << endl;
    cout << "Size of float		 : " << sizeof(float) << " bytes" << endl;
    cout << "Size of long  		 : " << sizeof( long) << " bytes" << endl;
	cout << "Size of long long   : " << sizeof(long long) << " bytes" << endl;
	cout << "Size of double 	 : " << sizeof(double) << " bytes" << endl;
	
	return 0;
}
