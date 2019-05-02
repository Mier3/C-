#include<iostream>
#include<iomanip>
#include<limits>
#include<bits/stdc++.h>

using namespace std;

int main(){
	cout << "Maximum int value " << INT_MAX << endl;
	cout << "Minimum int value " << INT_MIN << endl;
	//int test = 31432443253243214324321;
	//cout << test << endl;
	float fValue = 76.4;
	cout << setprecision(20) << fixed << fValue << endl;
	cout << "float " << sizeof (float) << endl;
	cout << "int " << sizeof (int) << endl;
	cout << "l int " << sizeof (long int) << endl;
	cout << "s int " << sizeof (short int) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "l double " << sizeof(long double) << endl;
	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;
	return 0 ;
}
