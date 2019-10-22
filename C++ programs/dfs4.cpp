# include <iostream>
# include <bits/stdc++.h>
using namespace std;
vector <int> v[100];
int counts  = 0;
bool visited[100];
void initialize(){
	for(int i=0;i<100;++i){
		visited[i]=false;
	}
}
void dfs(int k){
	visited[k] = true;
	for(int i=0;i<v[k].size();++i){
		if(visited[v[k][i]] == false){
			++ counts;
			dfs(v[k][i]);
		}
	}
}
int main(){
	cout << "Enter the number of nodes and edges "<< endl;
	int i,n,m,x,y,k;
	initialize();
	cin >> n >> m;
	cout << "Enter the nodes between which edges exists "<<endl;
	for(i=1;i<=m;++i){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cout << "Enter the root node " << endl;
	cin >> k;
	dfs(k);
	cout << "The number of nodes is "<< counts << endl;

}
