# include <iostream>
# include <bits/stdc++.h>
using namespace std;
bool visited[20];
vector<int> adj[20];
void dfs(int s){
	visited[s]=true;
	for(int i=0;i<adj[s].size();++i){
		if(visited[adj[s][i]]==false){
			dfs(adj[s][i]);
		}
	}
}
void init(){
	for(int i=0;i<20;++i){
		visited[i]=false;
	}
}
int main(int argc, char const *argv[])
{
	int i,edges,nodes,x,y,count=0;
	cout << "Enter the number of nodes and edges\n";
	cin >> nodes >> edges;
	cout << "Enter the nodes btw which edges exist\n";
	for(i=0;i<edges;++i){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(i=1;i<=nodes;++i){
		if(visited[i]==false){
			dfs(i);
			++count;
		}
	}
	cout <<"Number of connected parts in the graphs are "<< count<<endl;

	return 0;
}
