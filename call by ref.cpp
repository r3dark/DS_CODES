#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

void func(int &a,int &b)
{
	a=a+b;
}
int main()
{
	int x=10;
	int y=10;
	func(x,y);
	cout<<x<<" "<<y<<endl;
}
