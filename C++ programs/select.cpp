# include <iostream>
using namespace std ;
int min1(int a[],int st,int end){
	int i,min=a[st],p=st;
	for(i=st;i<end;++i){
		if(a[i]<min){
			min = a[i];
			p = i;
		}
	}
	cout << "Min is " << a[p] << endl;
	return p;
}
void fun2(int a[],int st,int end){
	int min_index,temp;
	if(st >=end){
		for ( int i = 0; i < end; ++i)
	{
		/* code */
		
		cout << a[i] << endl;
	}
	}
	
		min_index = min1(a,st,end);
		temp = a[st];
		a[st] = a[min_index];
		a[min_index] = a[st];
		cout << a[min_index] << "and" << a[st] << "are swapped" << endl;
		fun2(a,st+1,end); 
	
}

int main()
{
	/* code */
	int n;
	cout << "Enter the size of the array" << endl;
	int i;
	cin >> n;
	int ar[n];
	for(i=0;i<n;++i){
		cin>>ar[i];
	}
	
	cout << "The numbers in ascending order are " << endl;
	fun2(ar,0,n);

	return 0;
}