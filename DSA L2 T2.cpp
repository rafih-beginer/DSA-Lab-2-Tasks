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
	student s(105,500,"Ahmad");
	s.display();
}
