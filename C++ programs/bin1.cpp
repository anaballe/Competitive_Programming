	# include <iostream>
	# include <bits/stdc++.h>
	using namespace std;
	int findSmaller(int k,vector<vector<int> > &A,int r,int col){
    int start=0,end=col-1,z=0,mid=0;
    int p=-1,q=-1;
    //cout << end << " " << start << " " << r << " " << A[0][0] << " " << k << endl;
    
    while(start <= end){
        mid = (start+end)/2;
        //cout << mid << endl;
        if(A[r][mid] == k){
            p = mid;
            end = mid -1;
        }
        else if(A[r][mid] < k){
            start = mid + 1;
        }
        else{
            end = mid -1 ;
        }
      //  cout << mid << endl;
    }
    if(p!=-1){
        z = p;
    }
    else{
        if(end == -1 && start == 0){
            z=0;
        }
        if(start > end){
        	z = start;
        }
        
    }
 //   cout << "Smaller is " << z << endl;
    return z;
    
}
	int findMedian(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[1].size();
    int sm=A[0][0],lar=0,i,j;
    for(i=0;i<row;++i){
        if(sm > A[i][0])
            sm = A[i][0];
        if(lar < A[i][col-1])
            lar = A[i][col-1];
    }
    int start = sm,end = lar;
    int n = row * col;
    int ct = n/2;
    int med = 0;
    while(start <= end){
        int k = (start+end)/2;
        int p = 0;
        for(i=0;i<row;++i){
            p = p + findSmaller(k,A,i,col);
        }
     //   cout << " numbers smaller than " << k << " are total = " << p << endl;
        if(p == ct){
            med = k;
            break;
        }
        else if(p < ct){
            start = k + 1;
        }
        else{
            end = k -1 ;
        }
        
    }
    return med;
    
    
}

int main(int argc, char const *argv[])
{
	cout << "Enter the array of size 3 X 3 \n";
	cout << "Enter the elements \n";
	int x;
	vector<vector<int> > a;
	for(int i=0;i<3;++i){
		vector<int>s;
		for(int j = 0;j<3;++j){
			cin >> x;
			s.push_back(x);
		}
		a.push_back(s);
	}
	int med = findMedian(a);
	cout << "the median is " << med << endl;
	return 0;
}
