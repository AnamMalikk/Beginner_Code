#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int a[20];
    cout<<"Enter the no. of elements:";
    cin>>n;
    cout<<"\nEnter the elements:";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Even elements are: ";
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        cout<<a[i]<<"\t";
    }
    cout<<"\nOdd elements are: ";
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        cout<<a[i]<<"\t";
    }
    
    return 0;
}
