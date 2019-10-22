# include <iostream>
# include <math.h>
using namespace std;
int main(){
	int i,n,count = 0,k=0;
	cin >> n;
	int arr[] ={2,3,5,7,11,13,17,19};
	for(i=0;i<8;++i){
		if(n%arr[i]==0){
			++count;
		}
	}
	 k = pow(2,count)-1;
	cout << k;
	return 0;
}