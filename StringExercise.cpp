#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	string a = "abcd";
	string b = "ef";
	cout<< "Length a is " << a.size() << " and the lenght of b is " << b.size() <<endl;
	
	cout<< a+b << endl;

	cout<< b[0];	
	for (int i=1;i<a.size();i++){
		cout<< a[i];
	}
	cout<<" " << a[0] ;	
	for (int i=1;i<b.size();i++){
		cout<< b[i];
	}
	cout<< endl;	

	return 0;
}

