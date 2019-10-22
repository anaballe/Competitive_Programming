# include <bits/stdc++.h>
# define lli long long int
using namespace std;
void seive(lli m,lli n){
	lli prime[n+1];
	lli f = 0;
	
	for(lli i = 0;i<=n;++i){
		prime[i] = 1; 
	}
	
	for(lli p = 2;p*p<=n;++p){
		if(prime[p] == 1){
			for(lli i= p*p;i<=n;i=i+p){
				prime[i] = 0;
			}
		}
	}
	
	for(lli i = m;i<=n;++i){
		if(prime[i] && prime[i+6] && (i+6)<=n){
			++f;
		}
	}
	cout << " The number of magic prime numbers between " << m << " and " << n << " is " << f << endl;
}
int main()
{
	cout << "Enter the values of m and n ie the range \n";
	lli m,n;
	cin >> m >> n;
	seive(m,n);
	return 0;
}