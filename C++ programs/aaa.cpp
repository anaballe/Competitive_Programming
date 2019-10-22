#include<bits/stdc++.h>
#define rep(X,A,B) for(int X=A;X<=B;X++)
#define tep(X,A,B) for(int X=A;X>=B;X--)
#define LL long long
#define DB double
const int N=4000010;
using namespace std;
 
int n;
int tot=0,num=0,top,p[N];
int u[N],v[N],w[N],cnt=0;
 
void PRT(int x){
	if(x==0){
		printf("0\n");return;
	}
	int pos=0,t[N];
	while(x)t[++pos]=x%2,x/=2;
	tep(i,pos,1)printf("%d",t[i]);
	printf("\n");
}
 
void ADD(int x,int y,int z){
//	printf("%d %d ",x,y);PRT(z);
	cnt++;u[cnt]=x;v[cnt]=y;w[cnt]=z;
}
 
void INIT(){
	n--;
	tep(i,20,0){
		if(n&(1<<i)){
			top=i;
			break;
		}
	}
	num=(1<<top);
	top--;
	tot=1;
	tep(i,top,0){
		int las=tot;tot++;
		ADD(las,tot,(1<<i));
		ADD(las,tot,0);
		p[i+1]=las;
	}
}
 
void SOLVE(){
	tep(i,top,0){
		if(!(n&(1<<i)))continue;
		if(i==0)ADD(1,tot,num);
		else ADD(1,p[i],num);
		num|=(1<<i);
	}
	ADD(1,tot,num);
	printf("%d %d\n",tot,cnt);
	rep(i,1,cnt)printf("%d %d %d\n",u[i],v[i],w[i]);
}
 
int main(){
	scanf("%d",&n);
	if(n==2){
		printf("2 2\n");
		printf("1 2 0\n1 2 1\n");
		return 0;
	}
	/*if(n==4){
		printf("2 4\n");
		rep(i,0,3){
			printf("1 2 %d\n",i);
		}
		return 0;
	}*/
	INIT();
	SOLVE();
	return 0;
}