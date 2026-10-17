#include<iostream>
using namespace std;
class Book
{
	public:
	string title ;
	string author;
	int price;
	
	Book(string t,string a,int p)
	{
		title=t;
		author=a;
		price=p;
	}
	
	void display()
	{
		cout<<"Title "<<endl;
		cout<<"Author "<<endl;
		cout<<"Price "<<endl;
	}
		
};

int main()
{
	Book b1,b2,b3;

	
	b1.title="";
	b1.author="";
	b1.price=700;
	b1.display();
	
	b2.title="";
	b2.author="";
	b2.price=800;
	b2.display();
	
	b3.title="";
	b3.author="";
	b3.price=1000;
	b3.display();
	
	
	
	
}