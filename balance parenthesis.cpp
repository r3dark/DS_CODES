#include <stack>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    stack <char> s;
    int i,t;
    char x;
    cin >> t;
    for(int a = 0; a < t; a++){
        string c;
        cin>>c;
        for (i=0;i<c.length();i++){
	        if(c[i]=='[')
	            s.push(c[i]);
	        else if(c[i]=='{')
	            s.push(c[i]);
	        else if(c[i]=='(')
	            s.push(c[i]);
			else if(!s.empty() && c[i]==']'){
	            x=s.top();
	                if(x=='[')
	                    s.pop();
	        }
	        else if(!s.empty() && c[i]=='}'){
	           x=s.top();
	                if(x=='{')
	                    s.pop();
	        }
	        else if(!s.empty() && c[i]==')'){
	            x=s.top();
	                if(x=='(')
	         	           s.pop();
	        }
	        else if(s.empty() && (c[i]==')' || c[i]=='}' || c[i]==']')){
	        	s.push(c[i]);
	        	break;
			}
		}
		if(s.empty())
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
		while(!s.empty())
			s.pop();
    }
    return 0;
}
