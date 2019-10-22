#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main() {
	// your code goes here  
	lli t;
	cin >> t;
	while(t--){
	    char s[51];
	    cin >> s;
	    int flag = 0;
	   // int ar[51];
	    int prev = 0;
	    int k = 0;
	    lli l = strlen(s);
	    for(lli i =0;i<l;++i){
	        if(s[i]!='.'){
	            int v = s[i];
	            v = v - 48;
	         //   cout << v << " ";
	            if(prev >= (i-v) && k){
	                flag = 1;
	                break;
	            }
	            else{
	                prev = i + v;
	            }
	            k = 1;
	            }
	           
	        }
	    
	    
	    
	    if(flag == 1)
	        cout << "Unsafe" << endl;
	    else
	        cout << "Safe" << endl;
	}
	
	return 0;
}

