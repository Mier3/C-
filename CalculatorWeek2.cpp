#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

void processSelection() {
	cout << "Enter selection: " << endl;
	int input;
	cin >> input;

	switch (input) {
	case 1:
	cout << "Searching ..." << endl;
	break;

	case 2:
	cout << "Viewing ..." << endl;
	break;

	case 3:
	cout << "Quitting ..." << endl;
	break;

	default:
	cout << "Please select an item from the menu." << endl;
	}
}

int getInput(){
	cout<<"Enter selection: "<<endl;
	int input;
	cin>>input;
	return input;	
}

int main() {
	
	string input;
	string inputString[10];
	int inputNum[10];
		
	cout << "Enter your command: " << endl;
	getline(cin,input);
	input=(string) input;
	cout << input<<endl;
	
	int begin=0,numInt=0,numString=0;
	int end;
	for (int i=0;i<input.length();i++){
		if (isspace(input[i])){
			if (isdigit(input[begin]) || isdigit(input[begin+1])){
				istringstream iss (input.substr(begin,i));
				iss>>inputNum[numInt];			
				//inputNum[numInt]=(int) input.substr(begin,i-1);	
				numInt++;
			} else{
				//end=i;				
				//istringstream iss (input.substr(begin,i));
				//iss>>inputString[numString];
					
				inputString[numString]=input.substr(begin,i-begin); //should be i-1 but does not work	
				numString++;
			}
			begin=i+1;
		}
	}
	if (isdigit(input[begin]) || isdigit(input[begin+1])){
				istringstream iss (input.substr(begin,input.length()));
				iss>>inputNum[numInt];			
				//inputNum[numInt]=(int) input.substr(begin,i-1);	
				numInt++;
	} else{
				inputString[numString]=input.substr(begin,input.length()-1);	
				numString++;
	}
	
	cout<<"Integers"<<endl;
	for (int i=0;i<numInt;i++){
		cout<<inputNum[i]<<endl;
	}
	cout<<"Strings:"<<endl;
	for (int i=0;i<numString;i++){
		cout<<inputString[i]<<endl;
	}
	cout<<endl;
	
	cout<< numInt << " and " << numString << endl;
	cout<<inputString[1].length()<<endl;


	//showMenu();
	//processSelection();
	return 0;
}
