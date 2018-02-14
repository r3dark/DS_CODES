#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int rearr(int a[],int n){
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=a[a[i]];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=arr[i];
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	rearr(a,n);
	print(a,n);
}

