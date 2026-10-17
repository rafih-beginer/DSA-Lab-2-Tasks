#include<iostream>
using namespace std;
class student{
	public:
		int rollNo;
		int marks;
		string name;
		
	void display()
	{
		cout<<""<<rollNo<<endl;
		cout<<""<<marks<<endl;
		cout<<""<<name<<endl;
		
	}
};

int main()
{
	student s1;
	s1.rollNo=101;
	s1.marks=1100;
	s1.name="Rafih";
	s1.display();
	
	
	student s2;
	s2.rollNo=104;
	s2.marks=1000;
	s2.name="Ahmad";
	s2.display();
	
	student s3;
	s3.rollNo=106;
	s3.marks=900;
	s3.name="Huzaifa";
	s3.display();
}
