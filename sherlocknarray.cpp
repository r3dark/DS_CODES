#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int j,k,i,x,y;
		for(int i=0;i<n;i++)
		{	
			x=0,y=0;
			for(j=0;j<i;j++)
			{
				x=x+a[j];
			}
			for(k=i+1;k<n;k++)
			{
				y=y+a[k];
			}
			cout<<x<<" "<<y<<endl;
			if(x==y){
				f=1;
				break;
			}
			else{
				f=0;
			}
		}
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
