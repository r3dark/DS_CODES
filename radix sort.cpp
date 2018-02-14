#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int *a,*output,n,m=0,c=0;
	cout<<"enter no. of elements\n";
	cin>>n;									//6
	a=new int[n];
	output=new int[n];
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];							//883 843 114 215 214 515
		if(a[i]>=m)
		{
			m=a[i]+1;						//max element+1 or else won't be able to
											//access highest element for incrementation
											//during hashing
		}
	}
	while(m)								//calculate no. of digits
	{
		m=m/10;
		c++;
	}
	for (int j=0;j<c;j++)
	{
		int arr[n],m=0;
		int mod=pow(10,j+1);
		int div=pow(10,j);
		for(int i=0;i<n;i++)
		{
			arr[i]=a[i]%mod;
			if(j!=0)
			{
				arr[i]=arr[i]/div;
			}
			if(arr[i]>=m)					//">=" coz if last element is already there
											//in "m", size won't be inc.; crash
			{
				m=arr[i]+1;					//max element+1 or else won't be able to
											//access highest element for incrementation
											//during hashing
			}
		}
		int count[m]={0};
		for(int i=0;i<n;i++)
		{
			count[arr[i]]++;
		}
		for(int i=1;i<m;i++)
		{
			count[i]=count[i]+count[i-1];
		}
		for(int i=n-1;i>=0;i--)					//for stable sorting
		{
			if(j==0)
			{
				int x=a[i]%mod;
				int y=--count[x];
				output[y]=a[i];
			}
			else if(j!=0)   
			{
				int x=a[i]%mod;
				x=x/div;
				int y=--count[x];
				output[y]=a[i];
			}
		}
		for(int i=0;i<n;i++)
		{
			a[i]=output[i];
		}
	}
	cout<<"\noutput array:\n";
	for(int i=0;i<n;i++)
	{
		cout<<output[i]<<"	";
	}
}
