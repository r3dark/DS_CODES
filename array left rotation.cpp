#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,r,x;
    cin>>n>>r;
    int a[n];
    /*for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=r;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<r;i++){
        cout<<a[i]<<" ";
    }*/
	
	/*x=r%n;
    while(x--){
        int t=a[0];
        for(int i=x;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[n-1]=t;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    
    for(int i=r;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<r;i++){
		cin>>a[i];
	}
	 for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
