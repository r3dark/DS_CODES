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
	cout<<"enter element to insert at beginning"<<endl;
	int s;
	cin>>s;
	for(int i=n;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=s;
	/*int b[n+1];
	b[0]=s;
	for(int i=0;i<=n;i++)
	{
		b[i+1]=a[i];
	}*/
	for(int i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
