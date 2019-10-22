#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t,flag = 0;
	lli n,i;
	
	cin >> t;
	while(t--){
	    cin>>n;
	    lli A[n];
	    flag = 0;
	    for(i=0;i<n;++i)
	        cin >> A[i];
	    sort(A,A+n);
	    for(i=0;i<n-1;++i){
	        if(A[i] == A[i+1]){
	            flag =1;
	            cout << "Yes" << endl;
	            break;
	        }
	    }
	    if(flag == 0)
	        cout << "No" << endl;
	}
	return 0;
}
