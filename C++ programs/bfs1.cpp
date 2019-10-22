#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10];
int level[10];
bool vis[10];
void bfs(int s,int nodes){
	queue <int> q;
	int i;
	q.push(s);
	level[s]=0;
	vis[s]=true;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(i=0;i<adj[p].size();++i){
			if(vis[adj[p][i]]==false){
				level[adj[p][i]]=level[p]+1;
				q.push(adj[p][i]);
				vis[adj[p][i]]=true;
			}
		}
	}
    for(i=1;i<=nodes;++i){
    	cout << "The distance of node "<<i<< " from "<<s<<" is "<<level[i]<<endl;
    }
}
int main(int argc, char const *argv[])
{
    cout << "Enter the number of nodes and the edges\n";
    int x,y,i,s,j,nodes,edges,k,e=0,f=0;
    cin >> nodes >> edges;
    cout << "Enter the pair of nodes between which edges exists\n";
    for (i=0;i<edges; ++i)
    {
    	cin >>x >>y;
    	f=0;
    	e=0;
    	for(k=0;k<adj[x].size();++k){
    		if(adj[x][k]==y){
    			f=1;
    			break;
    		}
    	}
    	for(k=0;k<adj[y].size();++k){
    		if(adj[y][k]==x){
    			e=1;
    			break;
    		}
    	}
    	if(f==0)
    		adj[x].push_back(y);
    	if(e==0)
    		adj[y].push_back(x);
    }
    for(i=1;i<=nodes;++i){
    	cout <<"Adjacency list of "<<i<< " is ";
    	for(j=0;j<adj[i].size();++j){
    		if(j==adj[i].size()-1){
    			cout << adj[i][j];
    		}
    		else {
    			cout <<adj[i][j] << " , ";
    		}
    	}
    	cout << "\n";
    }
    cout << "Enter the source node from where you want to calculate the distance\n";
    cin >> s;
    bfs(s,nodes);

	return 0;
}