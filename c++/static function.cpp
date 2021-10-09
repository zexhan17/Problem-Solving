#include <iostream>
using namespace std;
                         //static data member
/*class student{
	private:
		int roll_no;
		string name;
		int marks;
	public:
	 static int obj_count;
	//connstructer
	student(){
		obj_count++;
	}
	
	void get_data();
	void show_data();
};

void student::get_data(){
	cout<<"enter roll number :";
	cin>>roll_no;
	cout<<"enter name :";
	cin>>name;
	cout<<"enter makrs :";
	cin>>marks;
}
void student::show_data(){
	cout<<"Roll  number ="<<roll_no<<endl;
	cout<<"Name ="<<name <<endl;
	cout<<"Marks ="<<marks<<endl;
	cout<<endl;
}
int student::obj_count=0;
int main(){
	student s1;
	s1.get_data();
	s1.show_data();
	
	student s2;
	s2.get_data();
	s2.show_data();
	
	student s3;
	s3.get_data();
	s3.show_data();
	cout<<"total obj created :"<<student::obj_count<<endl;
}*/

                           // static member function
/*class Demo{
 	private:
 		//static data members
 		static int x;
 		static int y;
 	public:
	 //static member function
	 static void print(){
	 	cout<< "value of x :"<<x<<endl;
	 	cout<< "Value of y :"<<y<<endl; 	
	 }
 };
 
 //static data members intinalizations
 int Demo::x=10;
 int Demo::y=20;
 
 int main(){
 	//Demo OB;  //creating object
 	//cout<<"print through object name :"<<endl;
 	//OB.print();
 	cout<<"printing through class name :"<<endl;
 	Demo::print();
	return 0;
}*/

							// static member function with 2nd examlpe

class box{
	private:
		double length;
		double width;
		double height;
	public:
		static int obj_count;
	// constructor	
	box(double l=2.0, double b=2.0, double h=2.0){
		cout<<"constructor is calling..."<<endl;
		length=l;
		width=b;
		height=h;
		//increment when const is created
		obj_count++;
	}
	double volume(){
		return length*width*height;
	}
	static int get_count(){
		return obj_count;
	}
};
int box::obj_count=0;

int main(){
	cout << "printing total number of objs before creating obj "<<endl;
	cout << "initail stage count :"<< box::get_count()<<endl;
	//creating objs  declaring them
	box b1(3.3,1.2,1.5);
	box b2(8.5,6.0,2.0);
	
	cout<<"print total nmbr of objs aftr creting obj "<<endl;
	cout<<"final stage count :"<<box::get_count()<<endl;
	return 0;
}
