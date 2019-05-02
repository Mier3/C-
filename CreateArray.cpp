#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	int numberArray[8];
	int numberArray2[8]={};

	cout<<"First method " << endl;
	for (int i=0; i<10;i++){
	cout<<numberArray[i]<<" ";
	}
	cout<<endl;

	cout<<"Second method " << endl;
	for (int i=0; i<10;i++){
	cout<<numberArray2[i]<<" ";
	}
	cout<<endl;

	return 0;
}
