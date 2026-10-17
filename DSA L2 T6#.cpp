#include<iostream>
using namespace std;
class account
{
	public:
		int balance;
		int withdraw;
		
	account(int b,int w)
    {
    	balance = b;
    	withdraw = w;
    }
	
	void display()
    {
    	cout<<""<<endl;
	}
	
};
int main()
{
	int amount;
	cout<<"Enter withdrawal amount"<<endl;
	cin>>amount ;
	if(amount<=0)
	{
		cout<<"Not possible"<<endl;
	}
	else
	{
		cout<<"Withdrawal successfull"<<endl;
	}
}