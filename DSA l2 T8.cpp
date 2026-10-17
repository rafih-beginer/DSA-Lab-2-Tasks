#include<iostream>
using namespace std;
class account
{
	public:
		double balance;
		double amount ;
		
		account(double b,double a)
		{
			balance = b;
			amount = a ;
			
		}
		void display()
		{
			if (balance < amount)
			{
				cout<<"Balance is low"<<endl;
			}
			else if (balance == 0)
			{
				cout<<"Balace is zero"<<endl;
			}
			else
			{
				cout<<"Withdrawal Successful";
			}
			}
		
		void deposit()
{
	    balance = balance + amount;
	    cout<< "Deposit successfully"<<endl;
	    cout<<" New balace is "<<balance<<endl;
}
	
			
		};
		
		
int main()
{
	account b;
	cout<<"Enter Balance ";
	cin>>b.balance;
	cout<<"Enter Withdrawal Amount ";
	cin>>b.amount;
	b.withdrawal();
	cout<<"Enter deposit Amount ";
	cin>>b.amount;
	b.deposit();
    return 0;
}




