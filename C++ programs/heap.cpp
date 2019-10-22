# include <iostream>
using namespace std;
void heapify(int ar[],int n ,int i){
	int l = 2*i+1 ;
	int r = 2*i+2 ;
	int largest = i;
	int tmp=0;
	if(l<n && ar[l]>ar[largest])
		largest=l;
	if(r<n && ar[r]>ar[largest])
		largest=r;
	if(largest != i){
		tmp=ar[i];
		ar[i]=ar[largest];
		ar[largest]=tmp;
		heapify(ar,n,largest);
	} 
}
void heapsort(int ar[],int n){
	// to prepare heap for the first time,the numbers have to be arranged from n/2 to 0

	int i,r;
	for(i=n/2;i>=0;--i){
		heapify(ar,n,i);
		printArray(ar,n);
	}
	for(i=n-1;i>=0;--i){
		r=ar[0];
		ar[0]=ar[i];
		ar[i]=r;
		heapify(ar,i,0);
		printArray(ar,n);
	}
}
void printArray(int ar[],int n){
	int i=0;
	cout << "After sorting we have " << endl;
	for(int i=0;i<n;++i){
		cout << ar[i] << " ";
	}
	cout << "\n";
}
int main(int argc, char const *argv[])
{
	// enter the size of the array
	cout << "Enter the size of the array" << endl;
	int n;
	cin >> n;
	int i,ar[n];
	cout << "Enter the elements of the array" << endl;
	for(i=0;i<n;++i)
		cin >> ar[i];
	heapsort(ar,n);
	printArray(ar,n);
	return 0;
}