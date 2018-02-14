#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"enter size of array"<<endl;
	int n;
	cin>>n;
	cout<<"enter elements"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to insert"<<endl;
	int s;
	cin>>s;
	cout<<"enter position"<<endl;
	int p;
	cin>>p;
	p=p-1;
	for(int i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}
	a[p]=s;
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
