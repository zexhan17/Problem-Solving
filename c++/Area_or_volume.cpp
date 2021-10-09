#include<iostream>
using namespace std;

class shape{
	protected:
		int x;
		int y;
		int z;
	friend void area();
	friend void vol();
	friend void option();
};

class rec : public shape{
	public:
		rec(){
			option();
		}
	private:
	option();
	area(int a,int b);
	vol(int a,int b,int c);
};

class coboid : public shape{
	public:
		coboid(){
			option();
		}
	private:
	void option();
	void area(int a,int b,int c);
	void vol(int a,int b,int c);
};
// M_A_I_N
int main(){
	for(int i=0;i<2;i++){
		int a=0;
		cout<<"what you want to choose rectangle or coboid \n 1 for rectangle 2 for coboid \n"; cin>>a;
		if(a==1){
			rec r;
		}else if(a==2){
			coboid c;
		}
	}
	return 0;
}

//class Rectangle's member functions
rec::area(int a,int b){
		int x=0;
		x=a*b;
		cout <<"Aera of a rectangle ="<<x<<endl;
	}
rec::vol(int a,int b,int c){
		int x;
		x=a*b*c;
		cout<<"volume of a rectangle =" <<x<<endl;
}
rec::option(){
	int op;
			cout<<"what do you want to calculate of rectangle, surface area or volume "<<endl;
			cout<<"0 for surface area & 1 for volume "; cin>>op;
			if(op==0){
				cout<<"Enter 1st number " ; cin>>x;
				cout<<"Enter 2nd number " ; cin>>y;
				area(x,y);
			}
			if(op==1){
			cout<<"Enter 1st number " ; cin>>x;
			cout<<"Enter 2nd number " ; cin>>y;
			cout<<"Enter 3rd number " ; cin>>z;
			vol(x,y,z);
			}
}
//class coboid's member functions
void coboid::area(int a,int b,int c){
		int x=0;
		x=2*a*b+2*b*c+2*c*a;
		cout <<"Aera of a coboid = "<<x<<endl;
	}
void coboid::vol(int a,int b,int c){
		int x;
		x=a*b*c;
		cout <<"Volume of a rectangle = "<<x<<endl;
	}
void coboid::option(){
	int op;
			cout<<"what do you want to calculate of cuboid, surface area or volume "<<endl;
			cout<<"0 for surface area & 1 for volume "; cin>>op;
			if(op==0){
				cout<<"Enter 1st number " ; cin>>x;
				cout<<"Enter 2nd number " ; cin>>y;
				cout<<"Enter 3rd number " ; cin>>z;
				area(x,y,z);
			}
			if(op==1){
			cout<<"Enter 1st number " ; cin>>x;
			cout<<"Enter 2nd number " ; cin>>y;
			cout<<"Enter 3rd number " ; cin>>z;
			vol(x,y,z);
			}
}
