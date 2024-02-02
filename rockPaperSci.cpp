#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	cout<<"What do you want to play? Rock(1)/Paper(2)/Scissors(3): ";
	int p;
	int machine_input= 0;
	cin>>p;
	cout<<endl;
	bool flag=1;
	switch(p){
		case 1:
		if(machine_input==0){
			cout<<"Draw.";
			break;
		}else if(machine_input==1){
			cout<<"You Lose.";
			break;
		}else{
			cout<<"You Win.";
			break;
		}
		case 2:
		if(machine_input==0){
			cout<<"You Win.";
			break;
		}else if(machine_input==1){
			cout<<"Draw.";
			break;
		}else{
			cout<<"You Lose.";
			break;
		}
		case 3:
		if(machine_input==0){
			cout<<"You Lose.";
			break;
		}else if(machine_input==1){
			cout<<"You Win.";
			break;
		}else{
			cout<<"Draw.";
			break;
		}
		default:
			cout<<"Enter valid number.";
	}
}
