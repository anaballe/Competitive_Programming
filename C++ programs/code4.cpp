#include<bits/stdc++.h>
using namespace std;
int m,n,dpp[11][11][21],xd,yd;

int cal(int x,int y,int k)
{
    if( x>m || x<0 || y>n || y<0)
        return 0;
    if(k==0 && x==xd && y==yd)
        return 1;
    if(k==0)
        return 0;
    if(dpp[x][y][k]!=-1)
        return dpp[x][y][k];
    else
        return dpp[x][y][k] = (cal(x-1,y,k-1)+cal(x,y-1,k-1)+cal(x,y+1,k-1)+cal(x+1,y,k-1));
}
int main()
{
    string mnkp;
    cin>>mnkp;
    vector<int> vects;
    stringstream ss(mnkp);
    int i;
    while(ss >> i)
    {
        vects.push_back(i);

           if(ss.peek() == ',')
        ss.ignore();
    }

        int k = vects[2]; m= vects[0] ; n= vects[1];

    for(int i=0;i<11;i++)
        for(int j=0;j<11;j++)
            for(int r=0;r<21;r++)
                dpp[i][j][r]=-1;
    string str;
        cin>>str;
    vects.clear();
    stringstream s(str);
    while(s >> i)
    {
        vects.push_back(i);
        if(s.peek() == ',')
        s.ignore();
    }
    int xi,yi;
    xd = vects[3]; yd= vects[2] ; xi= vects[1] ; yi = vects[0];
    int res = cal(xi,yi,k);
    cout<<res;
}