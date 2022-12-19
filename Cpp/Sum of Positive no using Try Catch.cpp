#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int a[30],n,sum=0,i;
	cout<<"Enter the numbers you want to take sum of:";
	cin>>n;
	cout<<"\nEnter the numbers:";
	for(i=0;i<n;i++)
{
	cin>>a[i];
	try
	{
		if(a[i]<0)
		{
			throw a[i];
		}
		sum += a[i];
	}
	catch (int x)
	{
		cout<<"\nError!! Attempt to add with negative no.";
	}
}
	cout<<"\nSum of all positive numbers is:"<<sum;
    return 0;
}
