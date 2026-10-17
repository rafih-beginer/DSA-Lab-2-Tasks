#include<iostream>
using namespace std;
class student{
	public:
		int rollNo;
		int marks;
		string name;
		
	
		student(int r,int m,string n)
		{
			rollNo=r;
			marks=m;
			name=n;
		}
	void display()
	{
		cout<<""<<rollNo<<endl;
		cout<<""<<marks<<endl;
		cout<<""<<name<<endl;
		
	}
};

int main()
{
	int r , m;
	string n;
	
	
	cout<<"Enter Roll NO"<<endl;
	cin>>r;
	cout<<"Enter Marks "<<endl;
	cin>>m;
	cout<<"Enter Name "<<endl;
	cin>>n;
	student s1(r,m,n);
	s1.display();
}
