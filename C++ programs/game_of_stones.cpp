#include <bits/stdc++.h>

using namespace std;

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pks printf("Case %d: ",++ks);

int n;
int main() {   
    int dp[200]={0};
    dp[0]=0; //0 means losing position
    dp[1]=0;
    dp[2]=1; //1 means winning position
    dp[3]=1;
    dp[4]=1;
    dp[5]=1;
    for(int i=6;i<=103;i++)
    {
        if(!dp[i-2] or !dp[i-3] or !dp[i-5])
          dp[i]=1; 
          //if you can move to at least one losing position, the current position is winning
        else dp[i]=0;

    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(dp[n]) puts("First");
        else puts("Second");

    }
    //cerr<<(en-st)/CLOCKS_PER_SEC<<endl;
      return 0;
}
