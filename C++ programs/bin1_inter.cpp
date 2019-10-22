# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int findMedian(vector<vector<int> > &A) {
//    vector<int> arr;
    
    int r = A.size();
    int c = A[0].size();
    
    int min = INT_MAX, max = INT_MIN;
    
    for(int i=0; i<r; i++) {
        if(A[i][0] > max) {
            max = A[i][c-1];
        }
        if(A[i][0] < min) {
            min = A[i][0];
        }
    }
    
    int req = (r*c + 1)/2;
    
    while(min < max) {    
        int mid = min + (max-min)/2;
       // cout << "MID:" << mid << "  ";
        int s = 0;
        
        for(int i=0; i<r; i++) {
            s += upper_bound(A[i].begin(), A[i].end() , mid) - A[i].begin();
           cout << "SUM:"<< s << "  ";
        }
    
        if(s < req)
            min = mid + 1;
        else
            max = mid;
    }

    return min;
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
