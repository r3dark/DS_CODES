#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	stack <char> s;
	string c;
    int i,t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        cin >> c;
    }
    for (i=0;i<c.length();i++){
        if(c[i]=='{')
            s.push(c[i]);
    }
    char x=s.top();
    cout<<x;
    return 0;
}
