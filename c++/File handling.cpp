#include<iostream>
#include<fstream>
using namespace std;

//void char_example();
void char_example(){
	ofstream fout;
	fout.open("sample.txt");
	fout << "Hello World"<<endl;
	fout << "Hello Dunya"<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("sample.txt");
	string line;
	while(fin){
		getline(fin,line);
		cout << line <<endl;
	}
	fin.close();

}
int main(){
	char_example;
	return 0;
}

/*void char_example(){
	ofstream fout;
	fout.open("sample.txt");
	fout << "Hello World"<<endl;
	fout << "Hello Dunya"<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("sample.txt");
	string line;
	while(fin){
		getline(fin,line);
		cout << line <<endl;
	}
	fin.close();
	return 0;
}*/
