#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t;
	cin >> t;
	while(t--){
	    lli D;
	    cin >> D;
	    lli d[D],p[D];
	    for(lli i =0;i<D;++i)
	        cin >> d[i] >> p[i];
	    lli n = d[D-1] - d[0];
	    lli dp[n+1],ct=p[0],j=0,k=1;
	    for(lli i=0;i<=n;++i){
	        if(((i+d[0]) >= d[k]) && j<D && k<D){
	            ct = ct + p[k];
	            // cout << " value of i+d[j] is " << (i+d[j]) << " and value of d[k] is " << d[k] << endl;
	            ++j;
	            ++k;
	        }
	        
	        dp[i] = ct;
	      //  cout << "for day " <<(i+d[0]) << ", We have required value strength as " << dp[i] << " and d[k] is " << d[k] << endl;
	    }
	    ////// printing the board
	    // for(lli i =0;i<=n;++i){
	    // 	cout << "for day " <<(i+d[0]) << ", We have required value strength as " << dp[i] << endl;
	    // }
	    ////// ends here
	    lli q;
	    cin >> q;
	    for(lli i =0;i<q;++i){
	        lli day,req;
	        cin >> day >> req;
	        if(day < d[0]){
	            if(req == 0){
	                cout << "Go Camp" << endl;
	            }
	            else{
	                cout << "Go Sleep" << endl;
	            }
	        }
	       else if(day > d[D-1]){
	            if(req <= ct){
	                cout << "Go Camp" << endl;
	            }
	            else{
	                cout << "Go Sleep" << endl;
	            }
	        }
	        else{
	            lli r = day-d[0];
	            lli v = dp[r];
	            if(req <= v){
	                cout << "Go Camp" << endl;
	            }
	            else{
	                cout << "Go Sleep" << endl;
	            }
	        }
	    }
	}
	return 0;
}
