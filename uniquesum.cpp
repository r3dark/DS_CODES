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
	int n,sum=0;
	cin>>n;
	int a[n];
	int b[100]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(!b[a[i]]){
			b[a[i]]++;
		}
		else{
			int j=i;
			while(b[j]==1){
				j++;
			}
			b[j]++;
		}
	}
	for(int i=0;i<100;i++){
		if(b[i]==1){
			sum=sum+i;
		}
	}
	cout<<sum<<endl;
	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /*int n,sum=0,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]++;
                i=0;
                j=i+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;*/
}
