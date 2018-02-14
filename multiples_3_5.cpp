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

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        double n,f;
        float p;
        cin >> n;
        //nth term, n\2(a+l)
        p=(n-1)/3;
        printf("%f\n",p);
        f=(3+((p-1)*3));
        long long int a=(3+f)*p/2;
        p=(n-1)/5;
        f=(5+((p-1)*5));
        long long int b=(5+f)*p/2;
        p=(n-1)/15;
        f=(15+((p-1)*15));
        long long int c=(15+f)*p/2;
        //first term, n\2(2a+(n-1)d)
        /*
        p=(n-1)/3;
        f=3-((1-p)*3);
        int a=(p/2)*((2*f)+((p-1)*(-3)));
        p=(n-1)/5;
        f=5-((1-p)*5);
        int b=(p/2)*((2*f)+((p-1)*(-5)));
        p=(n-1)/15;
        f=15-((1-p)*15);
        int c=(p/2)*((2*f)+((p-1)*(-15)));
        */
        cout<<a+b-c<<endl;
    }
    return 0;
}


