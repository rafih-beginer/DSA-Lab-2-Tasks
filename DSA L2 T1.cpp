#include<iostream>
using namespace std;
class student{
	public:
		int rollNo;
		int marks;
		string name;
		
    void display()
	{
		cout<<""<<rollNo<<marks<<name;
	
		
	}
};
int main()
{
	student s1;
	
	s1.rollNo=101;
	s1.marks=1100;
	s1.name="Rafih";
	s1.display();
	
}

