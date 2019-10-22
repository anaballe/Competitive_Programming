#include <bits/stdc++.h>
#define N 10000000000000000000
using namespace std;

int main() {
	// your code goes here
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long int i,a=0,sum=0,r=0,j=0,t,ar[1000000];
	cin >> t;
	for(i=1;;++i){
	    sum = 0;
	    if(i==1000000)
	        break;
	    for(j=i;j!=0;j=j/10){
	        r = j % 10;
	        sum = sum + r;
	    }
	    if(sum%10 == 0){
	        ar[a] = i;
	        ++a;
	    }
	}
	for(i=0;i<t;++i){
	    unsigned long long int n;
	    cin >> n;
	    cout << ar[n-1] << endl;
	}
	return 0;
}
