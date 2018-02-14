#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter index at which element is to be deleted"<<endl;
	int s;
	cin>>s;
	if(s<n)
	{
		for(int i=s;i<n;i++)
		{
			a[i]=a[i+1];
		}
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
		cout<<"wrong index"<<endl;	
}
