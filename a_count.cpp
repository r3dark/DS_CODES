#include<iostream>
#include<string>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int c=0,x=0;
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<s.length();i++)
		if(s[i]=='a')
			c++;
	for(int i=0;i<n%s.length();i++)
		if(s[i]=='a')
			x++;
	cout<<c*(n/s.length())+x;
}
