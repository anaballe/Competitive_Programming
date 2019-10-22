# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int findCount(vector<int> A, int B) {
    int p = -1,start = 0,end = A.size(),mid=0,cts=0,k=1,z=1;
    cout << end << endl;
    while(start <= end){
        mid = start + (start + end)/2;
        if(A[mid] == B){
            p = mid;
            ++cts;
            break;
        }
        else if(A[mid] < B){
            start = mid + 1;
        }
        else{
            end = mid -1 ;
        }
    }
    cout << mid << endl;	
    cout << p << endl;
    if(p == -1){
        return 0;
    }
    for(int i = 1;;++i){
        if((p+i) >= A.size()){
            k=0;
        }
        if((p-i) < 0){
            z=0;
        }
        if(k == 1){
            if(A[p+i]==B)
                ++cts;
            else
                k = 0;
        }
        
        if(z == 1){
            if(A[p-i]==B)
                ++cts;
            else
                z=0;
        }
        
        if(z == 0 && k==0)
            break;
        
    
        }
        
        return cts;
}
int main(int argc, char const *argv[])
{
	cout << "Enter the size of the array\n";
	vector<int> b ;
	int i,n,x;
	cin >> n;
	cout << "Enter the elemenst\n";
	for(i=0;i<n;++i){
		cin >> x;
		b.push_back(x);
	}
	int p = findCount(b,1);
	cout << " The frequency is " << p << endl;
	return 0;
}
