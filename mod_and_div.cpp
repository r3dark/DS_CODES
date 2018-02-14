#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int x,y,div;
	cout<<"number:		mod with:	divide with:\n";
	cin>>x>>y>>div;
	int z=x%y;
	int w=x/div;
	cout<<"rem: "<<z<<"	quo: "<<w;
}
