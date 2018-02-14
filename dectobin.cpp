#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
class dectobin
{
	int n;
	stack <int> s;
	public:
		int conversion()
		{
			cout<<"enter number\n";
			cin>>n;
			while(n)
			{
				int r=n%2;
				s.push(r);
				n=n/2;
			}
		}
		void print()
		{
			while(!s.empty())
			{
				cout<<s.top();
				s.pop();
			}
		}
};

int main()
{
	dectobin d;
	d.conversion();
	d.print();
}
