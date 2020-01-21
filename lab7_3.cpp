#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int age,h,ss;
	string status;
	cout<<"Enter your age : ";
	cin>>age;
	if(age<20){
		cout<<"Enter your height : ";
		cin>>h;
		if(h>=160){
			if(h>=175){
				cout<<"Enter your property : ";
				cin>>ss;
				ss>69000000 ? status="MARRIED" : status="ONE-NIGHT-STAND";
			}else{status="FRIEND";}
		}else{status="UNFRIEND";
			}
	}else if(age<30){
		cout<<"Enter your property : ";
		cin>>ss;
		ss>10000000 ? status="BEST FRIEND" : status ="UNFRIEND";
	}else{
		status = "UNFRIEND";
	}
	
	cout<<"Your status = "<<status;
	return 0;
}
