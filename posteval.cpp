#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

class posteval
{
	stack <char> s;
	string c;
	int x,y,z;
	public:
		posteval()
		{
			cout<<"enter the expression\n";
			getline(cin,c);
		}
		void convert()
		{
			for(int i=0;i<c.length();i++)
			{
				if(c[i]>=48 && c[i]<=57)
				{
					s.push(c[i]-48);
				}
				else if(c[i]=='+')
				{
					x=s.top();
					s.pop();
					y=s.top();
					s.pop();
					z=y+x;
					//cout<<z<<endl;
					s.push(z);
				}
				else if(c[i]=='-')
				{
					x=s.top();
					s.pop();
					y=s.top();
					s.pop();
					z=y-x;
					//cout<<z<<endl;
					s.push(z);
				}
				else if(c[i]=='*')
				{
					x=s.top();
					s.pop();
					y=s.top();
					s.pop();
					z=y*x;
					//cout<<z<<endl;
					s.push(z);
				}
				else if(c[i]=='/')
				{
					x=s.top();
					s.pop();
					y=s.top();
					s.pop();
					z=y/x;
					//cout<<z<<endl;
					s.push(z);
				}
				else if(c[i]=='^')
				{
					x=s.top();
					s.pop();
					y=s.top();
					s.pop();
					z=1;
					while(x)
					{
						z=z*y;
						x--;
					}
					//cout<<z<<endl;
					s.push(z);
				}
			}
		}
		void print()
		{
		int t=s.top();
			cout<<t<<endl;
			//cout<<s.top();								//reffer dectobin
		}
};

int main()
{
	posteval p;
	p.convert();
	p.print();
}
