#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Todo
//Minus sign


int main() {
	while (1){
	string input;
	string inputString[10];
	int inputNum[10];
		
	cout << "Enter your command: " << endl;
	getline(cin,input);
	input=(string) input;
	
	int begin=0,numInt=0,numString=0;
	for (int i=0;i<input.length();i++){
		if (isspace(input[i])){
			if (isdigit(input[begin]) || isdigit(input[begin+1])){
				istringstream iss (input.substr(begin,i-begin));
				iss>>inputNum[numInt];			
				//inputNum[numInt]=(int) input.substr(begin,i-1);	
				numInt++;
			} else{
				//end=i;				
				//istringstream iss (input.substr(begin,i-begin));
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
				inputString[numString]=input.substr(begin,input.length());	
				numString++;
	}
	
	if (inputString[0]=="quit"){
		cout<<"Good bye"<<endl;		
		break;
	} else if (inputString[0]=="help"){
		cout<<"Quit is the only function"<<endl;	
	} else if (inputString[0]=="version"){
		cout<<"calculator version 0.1"<<endl;	
	} else { //Arithmetic
		int calclated=1;		
		int result;		
		for (int i=0;i<numString;i++){		
			if (inputString[i]=="sum"){
				if (i==0){
					result=inputNum[0]+inputNum[1];
				} else {
					result=result+inputNum[i+1];
				}	
			} else if (inputString[i]=="multiply"){
				int mult=0;			
				int a1, a2,temp;
				if (i==0){
					a1=inputNum[0];
					a2=inputNum[1];		
				} else {
					a1=result;
					a2=inputNum[i+1];	
				}

				if (a1<0 && a2<0){
					a1=abs(a1);
					a2=abs(a2);
				} else if (a2<0){
					temp=a2;
					a2=a1;
					a1=temp;
				}
				for (int j=0;j<a2;j++){
					mult=mult+a1;
				}
				cout<<a1<< "was" << inputNum[0]<<endl;				
				result=mult;
			} else if (inputString[i]=="divide"){ //In progress
				/*int div=0;			
				int a1, a2,temp;
				if (i==0){
					a1=inputNum[0];
					a2=inputNum[1];		
				} else {
					a1=result;
					a2=inputNum[i+1];	
				}

				if (a1<0 && a2<0){
					a1=abs(a1);
					a2=abs(a2);
				} else if (a2>a){
					temp=a2;
					a2=a1;
					a1=temp;
				}
				for (int j=0;j<a2;j++){
					div=div+a1;
				}*/
			}else if (inputString[i]=="min"){
				if (i==0){
					result=inputNum[0]-inputNum[1];
				} else {
					result=result-inputNum[i+1];
				}
			}else if (inputString[i]=="sqrt"){
			cout<<"Not yet implemented"<<endl;		
			} else { 
				cout<<"Not yet implemented"<<endl;
				calclated=0;
			}
		}
		if (calclated==1){		
			cout<<"The result is: "<<result<<endl;
		}	
	}
}
	
	


	//showMenu();
	//processSelection();
	return 0;
}
