#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	string name = "Bob";
	int age = 32;
	
	//Does not owrk	
	//string info = "Name: " + name + "; age: " + (string) age;
	//cout << info;

	cout<< "Name: " << name << "; age: " << age <<endl;
	return 0;
}

