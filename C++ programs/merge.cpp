# include <bits/stdc++.h>
using namespace std;
void merge(int *ar,int start,int mid,int end){
	int i=start,j=mid+1,k=0;
	int temp[end-start+1];
	while(i<=mid && j<=end){
		if(ar[i] < ar[j]){
			temp[k] = ar[i];
			++i;
			++k;
		}
		else{
			temp[k] = ar[j];
			++j;
			++k;
		}
	}
	while(i<=mid){
		temp[k] = ar[i];
		++i;
		++k;
	}
	while(j<=end){
		temp[k] = ar[j];
		++j;
		++k;
	}
	for(int a = start;a <=end;++a){
		ar[a] = temp[a-start];
	}
}
void mergeSort(int *ar,int start,int end){
	if(start < end){
		int mid = (start + end)/2;
		mergeSort(ar,start,mid);
		mergeSort(ar,mid+1,end);
		merge(ar,start,mid,end);
	}
}
int main(int argc, char const *argv[])
{
	int n ;
	cout << " Enter the size of the array" << endl;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;++i)
		cin >> ar[i];
	mergeSort(ar,0,n-1);
	for(int i = 0;i<n;++i){
		cout << ar[i] << " ";
	}
	cout << "\n";
	return 0;
}