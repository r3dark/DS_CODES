#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
//void toh(int n,int (&a),int (&b),int (&c))
int toh(int n, int a[], int b[], int c[])
{
	if(n==1)
	{
		c[0]=a[0];
		cout<<"L->R"<<"		";
		return 1;
	}
	cout<<endl;
	if(n!=1)
	{
		toh(n-1,a,b,c);
		//cout<<"L->R";
		toh(n-1,b,a,c);
	}
	
}

int main()
{
	int n;
	cout<<"enter no. of disks\n";
	cin>>n;
	int a[n];
	int b[n];
	int c[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<"	";
	}
	cout<<endl;
	toh(n,a,b,c);
}
