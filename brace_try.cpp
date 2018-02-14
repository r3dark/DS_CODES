#include<iostream>
#include<stack>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	stack<char>s;
	
	char y;
	int k,i,j;
	cin>>k;//no.of case
	for(i=0;i<k;i++)
	{
		string c;
		cin>>c;
		for(j=0;j<c.length();j++)
		{
			if(c[j]=='('||c[j]=='{'||c[j]=='[')
			{
				s.push(c[j]);
			}
			if(c[j]==')')
			{
				if(s.empty())
				{
					s.push(c[j]);
					break;
				}
				else
				{
					y=s.top();
					if(y=='(')
					{
						s.pop();
					}
				}
			}
			else if(c[j]=='}')
			{
				if(s.empty())
				{
					s.push(c[j]);
					break;
				}
				else
				{
					y=s.top();
					if(y=='{')
					{
						s.pop();
					}
				}
			}
			else if(c[j]==']')
			{
				if(s.empty())
				{
					s.push(c[j]);
					break;
				}
				else
				{
					y=s.top();
					if(y=='[')
					{
						s.pop();
					}
				}
			}
			
		}
		if(s.empty())
		cout<<"YES"<<endl;
		else
		{
		cout<<"NO"<<endl;
		}
		while(!s.empty())
		{
			s.pop();
		}
	}
}
