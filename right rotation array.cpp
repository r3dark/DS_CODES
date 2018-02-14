#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //int *a;
    int n,r;
    cin>>n;
    cin>>r;
    //a=new int(n);
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //cin>>r;
    while(r){
        int t=a[n-1];
        for(int i=n;i>0;i--)
		{
			a[i]=a[i-1];
		}
        a[0]=t;
        r--;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
