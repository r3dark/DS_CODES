#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	int n,max=0;
	cout<<"enter size\n";
	cin>>n;									//15
	int a[n],output[n];
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];							//5 3 2 0 1 5 3 2 4 6 7 9 8 5 4
		if(a[i]>=max)						//">=" coz if last element is already there
											//in "m", size won't be inc.; crash
		{
			max=a[i]+1;						//max element+1 or else won't be able to
											//access highest element for incrementation
											//during hashing
		}
	}
	int count[max]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(int i=1;i<max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)					//for stable sorting
	{
//		int x=a[i];
//		int y=--count[x];
//		output[y]=x;
		count[a[i]]--;
		output[count[a[i]]]=a[i];
	}
//	cout<<"\ncount array:\n";
//	for(int i=0;i<max;i++)
//	{
//		cout<<count[i]<<"	";
//	}
	cout<<"\noutput array:\n";
	for(int i=0;i<n;i++)
	{
		cout<<output[i]<<"	";
	}
}
