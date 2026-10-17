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
				cout<<"Balace Successful";
			}
			}
			
		};
int main()
{
	account a1(75000,50000);
	a1.display();
}




