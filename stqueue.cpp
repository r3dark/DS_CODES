#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
struct queue{
	int info;
	struct node *link;
};
node *create_queue(node *);
node *concat(node *, node *);
node *display(node *);

int main()
{
	struct node *last, *last1=NULL, *last2=NULL;
	last1=create_queue(last);
	last2=create_queue(last);
	last1=concat(last1,last2);
	display(last1);
}
