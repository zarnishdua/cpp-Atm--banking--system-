#include <iostream>
using namespace std;
int main(){
	int balance;
	int amount;
	int remaining;
	cout<<"Enter your account balance :";
	cin>>balance;
	cout<<"Enter your withdrawal amount :";
	cin>>amount;
	if(amount<=0)
	cout<<"Invalid amount";
	else if(amount>balance )
	cout<<"Insufficient balance ";
	else if(amount%500!=0)
	cout<<"Invalid withdrawal amount";
	else
	{
	remaining=balance-amount;
	cout<<"Remaining balance is "<<remaining;
}
	return 0;
}
