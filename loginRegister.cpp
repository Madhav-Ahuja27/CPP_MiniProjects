#include <iostream>
using namespace std;
int main(){
	cout<<"Enter whether you want to Login(0) OR Register(1): ";
	int lor;
	cin>>lor;
	string name="User";
	if(lor==1){
		cout<<"Enter your username: ";
		int user;
		cin>>user;
		cout<<"Enter your password: ";
		int pas;
		cin>>pas;
		name=user;
	}
	cout<<"Hello"<<" "<<name<<"!";
}
