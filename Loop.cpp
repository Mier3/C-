#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	for (int i=1;i<=10000;i++){
	if (i%100==0){
		cout<<"."<<i;
		}
	}
	cout<<endl;
	return 0;
}
