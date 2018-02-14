#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter size of a"<<endl;
	cin>>n;
	cout<<"enter size of b"<<endl;
	cin>>m;
	int a[n];
	int b[m];
	int c[n]={0};
	cout<<"enter elements of a"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter elements of b"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
}
