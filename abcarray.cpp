//suppose a,b,c are arrays of int of size m,n,m+n resp. the no. in array a and b are in decending order. write a prog. to merge the arrays in an array c in decending order.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i=0,j=0;
	cout<<"enter size of a"<<endl;
	cin>>n;
	cout<<"enter size of b"<<endl;
	cin>>m;
	int a[n];
	int b[m];
	int c[n+m];
	int d[m+n];
	cout<<"enter elements of a"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter elements of b"<<endl;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<m+n;i++)
	{
		if(a[i]>b[i])
		{
			c[i]=a[i];
			d[i]=b[i];
		}
		else if(a[i]<b[i])
		{
			c[i]=b[i];
			d[i]=a[i];
		}
	}
	/*while(a[i]>b[i])
	{
		c[i]=a[i];
		d[i]=b[i];
		i++;
	}
	while(b[i]>a[i])
	{
		c[i]=b[i];
		d[i]=a[i];
		i++;
	}*/
	for(j=i;j<m+n;j++)
	{
		c[j]=d[j-i];
	}
	for(i=0;i<m+n;i++)
	{
		cout<<c[i]<<" ";
	}
}
