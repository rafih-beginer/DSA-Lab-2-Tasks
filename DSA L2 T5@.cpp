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
    student s1(105,500,"Ahmad");
	s1.display();
	
	
    student s2(108,900,"Rafih");
	s2.display();
	
	student s3(109,1000,"Huzaifa");
	s3.display();
