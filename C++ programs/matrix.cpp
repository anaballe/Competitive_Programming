# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int c=A[0].size();
    int r=A.size();
    cout << r << " " << c << " " << B << endl;
    int start=0,end=r-1,mid=0;
    int p=0,z=0;
    int start1=0,end1=0,mid1=0;
    while(start <= end){
    	//cout << start << " " << end << " " << mid << endl;
        mid=(start+end)/2;
        if(A[mid][c-1] > B){
            end=mid;
        }
        else if(A[mid][c-1] < B){
            start=mid+1;
        }
        else if(A[mid][c-1] == B){
            return 1;
        }
        //cout << start << " " << end << " " << mid << endl;
        if(start == end){
            z=1;
          // cout << " Challa " << endl;
            start1=0,end1=c-1;
            while(start1<=end1){
            mid1=(start1+end1)/2;
            if(A[start][mid1] > B){
                end1=mid1-1;
            }
            else if(A[start][mid1] < B){
                start1=mid1+1;
            }
            else{
                p=1;
                return p;
            }
            }
        }
        if(z==1){
            return 0;
        }
        
    }
    return 0;
}

int main(int argc, char const *argv[])
{
	int number;
	vector<vector<int> > A = {{1,   3,  5,  7},{10, 11, 16, 20},{23, 30, 34, 50}};
	cout << "Search the number " << endl;
	cin >> number;
	int a = searchMatrix(A,number);
	cout << "Output is " << a << endl;
	return 0;
}