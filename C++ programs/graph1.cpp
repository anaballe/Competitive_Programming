# include <bits/stdc++.h>
# include <iostream>
using namespace std;
vector <int> v[10000];
bool visited[10000];
int counts ;
void initialize(){
	for(int i=0;i<100;++i){
		visited[i]=false;
	}
	counts  = 0;
}
void dfs(int k){
    visited[k] = true;
	for(int i=0;i<v[k].size();++i){
		if(visited[v[k][i]] == false){
			++counts;
			dfs(v[k][i]);
		}
	}
}
int main(int argc, char const *argv[])
{
	
	int i,j,t,ed,x,y,max=0;
	cin >> t;
	for(i=0;i<t;++i){
		cin >> ed;
		for(j=0;j<ed;++j){
			cin >>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		//int l = v.size();
		initialize();
		//counts  = 0;
		dfs(x);
		cout << counts+1 << endl;
		for(int k = 0;k<10000;++k)
			v[k].clear();
	}
	return 0;
}