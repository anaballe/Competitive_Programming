#include <bits/stdc++.h>

using namespace std;

#define lli long long int
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    lli n,i,j;
	    int cts = 0;
	    cin >> n;
	    lli a[n];
	    for(i=0;i<n;++i)
	        cin >> a[i];
	    for(i=0;i<n-1;++i){
	        if(a[i]%2 == 0 ){
	            for(j=i+1;j<n;++j){
	                if(a[j]%2 == 1)
	                   // cout << a[i] << " " << a[j] << endl;
	                    ++ cts;
	            }
	        }
	        else{
	            continue;
	        }
	    }
	   cout << cts <<endl;
	    //cout << "\n";
	}
	return 0;
}
