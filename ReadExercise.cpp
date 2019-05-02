#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    cout<<"Enter three integer numbers"<<endl;
    int a,b,c;
    
	cin>>a>>b>>c;	
	while (1){
		if (cin.fail()){
		cin.clear();
 		cin.ignore(256,'\n');
		//cin.ignore(numeric_limits<streamsize>::max(),’\n’);
		cout<<"You have entered wrong input"<<endl;
		cout<<"Enter three integer numbers"<<endl;
		cin>>a>>b>>c;
		}
		if(!cin.fail()){
			break;
		}
	}
    cout<<"The total you entered is " << a+b+c <<endl;

    return 0;
}

