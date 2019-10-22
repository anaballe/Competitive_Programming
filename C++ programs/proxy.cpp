#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	
	int t,p=0,a=0,D=0,i=0;
	char st[1001];
	cin >> t;
	while(t--){
	    cin >> D;
	    p=0;
	    a=0;
	    cin >> st;
	   // cout << "\n";
	   // cout << st << endl;
	    for(i=0;i<strlen(st);++i){
	    	//cout << st[i] << endl;
	        if(st[i] == 'P')
	            ++p;
	        
	    }
	  //  cout << p << a << D << endl;
	    double per = (p*1.0)/D;
	  //  cout << p << per << endl;
	    for(i=2;i<D-2;++i){
	        per = (p*1.0)/D;
	        if(per>= 0.75)
	            break;
	        if((st[i] == 'A') && (st[i-1]=='P' || st[i-2]=='P') && (st[i+2]=='P' || st[i+1]=='P')){
	            ++p;
	            ++a;
	        }
	    }
	    if(per<=0.75)
	        cout << "-1" << endl;
	    else
	        cout << a << endl;
	   
	}
	return 0;
}
