#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
int dist[100000];
bool vis[100000];
void bfs(int s,int node,int edges)
{
	queue<int> q;
	int i,p;
	q.push(s);
	dist[s]=0;
	vis[s]=true;
	while(!q.empty()){
		p=q.front();
		q.pop();
		for(i=0;i<adj[p].size();++i){
			if(vis[adj[p][i]]==false){
				dist[adj[p][i]]=dist[p]+1;
				q.push(adj[p][i]);
				vis[adj[p][i]]=true;
			}
		}
	}
	for(i=1;i<=node;++i){
		if(i==s){
			continue;
		}
		else if(dist[i]==0 && i!=s){
			cout <<"-1 ";
		}
		else {
			cout << dist[i]*6<< " ";
		}
	}
	cout <<"\n";


}
int main(int argc, char const *argv[])
{
	int i,x,y,node,edges,s,q,j;
	cin >>q;
	for(i=0;i<q;++i)
	{
     cin >>node>>edges;
     for(j=0;j<edges;++j){
     	cin >>x >>y;
     	adj[x].push_back(y);
     	adj[y].push_back(x);
     }
     cin >>s;
     bfs(s,node,edges);
     for(j=0; j<node;j++){
     	vis[j] = false;
     }
	}
	return 0;
}