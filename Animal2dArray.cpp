# include <iostream>
using namespace std;

int main(){
	string animals[3][3]={{"fox","dog","monkey"},{"mouse","squirrel","fish"},{"parrot","catch","horse"}};	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
		cout<<animals[i][j];
	}
	}
	cout<<endl;
	return 0;
}
