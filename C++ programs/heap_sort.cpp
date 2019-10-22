# include <iostream>
using namespace std;
// to sort the array in descending order
void printArray(int ar[],int n){
	int i=0;
	cout << "Array after sorting in descending order is as" << endl;
	for(i=0;i<n;++i){
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void heapify(int ar[],int n,int i){
	// used to build heap
	int smallest=i;
	int l=2*i+1;
	int r=2*i+2;
	int tmp=0;
	if(l<n && ar[smallest]>ar[l]){
		smallest=l;
	}
	if(r<n && ar[smallest]>ar[r]){
		smallest=r;
	}
	if(smallest!=i){
		tmp=ar[i];
		ar[i]=ar[smallest];
		ar[smallest]=tmp;
		heapify(ar,n,smallest);
	}
}
void heapSort(int ar[],int n){
	// first biuld the min heap
	int i,tmp=0;
	for(i=n/2;i>=0;--i){
		heapify(ar,n,i);
	}
	for(i=n-1;i>=0;--i){
		heapify(ar,i,0);
		tmp=ar[i];
		ar[i]=ar[0];
		ar[0]=tmp;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter the number of the arrays" << endl;
	cin >> n;
	int ar[n],i;
	cout << "Enter the elements of the array" << endl;
	for(i=0;i<n;++i){
		cin >> ar[i];
	}
	heapSort(ar,n);
	printArray(ar,n);
	return 0;
}