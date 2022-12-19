#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class triangle
{
	double area;
	char type[20];
	public:
		triangle(char*p)
		{
			area=0;
			strcpy(type,p);
		}
	    void compute_area(int a,int b,int c);
		void compute_area(int a,int b);
		void compute_area(int a);
		triangle operator=(triangle o1);
		int operator==(triangle o1);
		void display()
		{
			cout<<"\nType of Triangle="<<type;
			cout<<"\nArea of triangle="<<area;
		}
};
void triangle::compute_area(int a,int b,int c)
{
	double s;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
 }
void triangle:: compute_area(int a,int b)
{
	area=1.0/2*a*b;
}
void triangle::compute_area(int a)
{
	area=sqrt(3)/4*a*a;
}
triangle triangle::operator=(triangle o1)
{
	area=o1.area;
	strcpy(type,o1.type);
	return (*this);
}
int triangle::operator==(triangle o2)
{
	if(area==o2.area)
	return 1;
	else
	return 0;
}
int main()
{
	triangle o1("Scalene"),o2("Equilateral"),o3("Isosceles");
	o1.compute_area(122,120,22);
	o2.compute_area(3);
	o3.compute_area(4,5);
	o1.display();
	o2.display();
	o3.display();
	if(o2==o3)
	cout<<"\nArea is equal";
	else
	cout<<"\nArea is not equal";
	return 0;
}
