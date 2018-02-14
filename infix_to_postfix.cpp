#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
class fix{
	int* a;
	string str;
	public:
		int i;
		int priority(char p)
		{
		    int k=-1; 
			switch(p)
			{
			case '+':
			case '-':
				k=1;
				
			case '*':
				case '/':
					k=2;
			}
			return k;
		}
		int highPrecendnc(char c1,char c2)
		{
			int c3=priority(c1);
			int c4=priority(c2);
			
			if(c3 == c4)
	       {
			return true;
    	   }
	       else if( c3 > c4 )
	       return true;
	       else
	       return false;
		}
	
   void enter()
   {
   	cout<<"enter string"<<endl;
   	getline(cin,str);
   }
   
   void infix()
   {
   	stack<char> s;
   	string postfix=" ";
   	for(i=0;i<str.length();i++)
   	{
   		if(isOperator(str[i]))
   		{
   			while(!s.empty() && s.top()!= '(' && highPrecendnc(s.top(),str[i]) )
   			{
   				postfix+=s.top();
   				s.pop();
			 }
			   s.push(str[i]);
		   }
		   else if(isOperand(str[i]))
		   {
		   	postfix+=str[i];
		   }
		   else if(str[i]=='(')
		   s.push(str[i]);
		   
		   else if(str[i]==')')
		   {
		   	while(!s.empty() && s.top()!= '(')
		   	{
			  
		   	postfix+=s.top();
		   	s.pop();
		   }
		   s.pop();
	   }
   }

    while(!s.empty())
    {
    	postfix+=s.top();
    	s.pop();
	}
	cout<<"postfix expression: ";
	cout<<postfix;
    }
   
   bool isOperand(char c)
   {
   	if(c >= '0' && c <= '9') return true;
	if(c >= 'a' && c <= 'z') return true;
	if(c >= 'A' && c <= 'Z') return true;
	else
	return false;
   }
   
   bool isOperator(char c)
   {
   	if(c=='+' || c=='-' || c=='*' || c=='/' )
   	return true;
   	else
   	return false;
   }
};
int main()
{
	fix obj;
	obj.enter();
	obj.infix();
}
