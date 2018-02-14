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
    int n;
    cin>>n;
    int a[n];
    int b[n]={0};
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	int y=a[i];
    	b[y]++;
	}
    /*for(int i=0;i<n;i++){
        cin>>a[i];
    }*/
    /*for(int i=0;i<n;i++){												//with for loop (n^2)
        int t=a[i];
        for(int j=i+1;j<n;j++){
            if(t==a[j]){
                b[t]++;
            }
        }
    }*/
    /*for(int i=0;i<n;i++){												//with mod (n)
        int t=a[i]%n;
        b[t]++;
	}*/
    for(int i=0;i<n;i++){
        if(b[i]>1)
            cout<<i<<" ";
    }
    return 0;
}
