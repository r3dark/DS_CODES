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
	cout<<"enter element to delete"<<endl;
	int s,f=0;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
			f++;
		if(a[i]==s)
		{
			for(int j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	if(f>0)
	{
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else if(f==0)
		cout<<"element not found";
	cout<<f;
}
