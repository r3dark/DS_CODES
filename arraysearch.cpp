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
	cout<<"enter element to find"<<endl;
	int s,f=0;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s==a[i])
		{
			cout<<"element is at "<<i+1<<"th position"<<endl;
			f=1;
		}
	}
	if(f==0)
			cout<<"element not found"<<endl;
}
