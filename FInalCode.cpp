# include <iostream>
using namespace std;

int main(){
	cout<<"Hello, when were you born?"<<endl;
	int year;
	cin>>year;
	if (year<1900){
		cout<<"That's early, before the 1900s!"<<endl;
	} else if(year>=1900 && year<2020){
		cout<<"I can relate to that Starting from 1900!"<<endl;
	} else{
		cout<<"That's the future!"<<endl;
	}

	//Second
	int exam1,exam2,exam3;
	cout<<"Input exam grade one:"<<endl;
	cin>>exam1;
	cout<<"Input exam grade two:"<<endl;
	cin>>exam2;
	cout<<"Input exam grade three:"<<endl;
	cin>>exam3;

	int grades[3]={exam1,exam2,exam3};
	int sum=0;
	
	for (int i=0;i<sizeof(grades)/sizeof(*grades);i++){
		sum=sum+grades[i];
	}
	
	string opinion;
	int avg=sum/(sizeof(grades)/sizeof(*grades));
	if (avg>=90){
		opinion="Great!";
	} else if(avg>=80 && avg<90){
		opinion="Good!";
	} else if(avg>=70 && avg<80){
		opinion="Okay!";
	} else if(avg>=65 && avg<70){
		opinion="Meh";
	} else {
		opinion="No";
	}
	
	for (int i=0;i<sizeof(grades)/sizeof(*grades);i++){
		cout<< "Exam: " << grades[i] << endl;
		cout << "Average: " << avg << endl;
		cout << "Grade: " << opinion << endl; 
	}
	if (opinion=="No"){
		cout<<"Failed"<<endl;
	} else {
		cout<<"Passed"<<endl;
	}
	
	return 0;
}
