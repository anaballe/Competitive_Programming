#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t;
	cin >> t;
	while(t--){
	    lli n ,k;
	    cin >> n >> k;
	    lli a[n],b[n];
	    for(lli i=0;i<n;++i)
	        cin >> a[i];
	    sort(a,a+n,greater<int>());
	    lli x = 0;
	    for(lli i =0;i<n;++i){
	        if(i==0){
	           b[x]=a[i];
	           ++x;
	        }
	        else if(a[i]==a[i-1]){
	            continue;
	        }
	        else{
	            b[x] = a[i];
	            ++x;
	        }
	    }
	    cout << "\n";
	    cout << "Sorted Array without the duplicates " << endl;
	    for(lli i=0;i<x;++i){
	    	cout << b[i] << " " ;
	    }
	    cout << "\n";
	    lli v = b[k-1];
	    lli ct = 0;
	    for(lli i=0;i<n;++i){
	        if(a[i]>= v){
	            ++ct;
	        }
	        else{
	            break;
	        }
	    }
	    cout << ct << endl;
	    
	}
	return 0;
}
