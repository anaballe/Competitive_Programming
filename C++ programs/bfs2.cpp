# include <iostream>
# include <bits/stdc++.h>
using namespace std;
vector<int> adj[10];

int dist[10];
bool visited[10];
void bfs(int x,int nodes){
	queue <int> q;
	int i,y;
	q.push(x);
	dist[x]=0;
	visited[x]=true;
	
	while(!q.empty()){
		 y= q.front();
		q.pop();
		for(i=0;i<adj[y].size();++i){
			if(visited[adj[y][i]]==false){
				visited[adj[y][i]]=true;
				dist[adj[y][i]]=dist[y]+1;
				q.push(adj[y][i]);
			}
		}
	}
	int arr[20];
	for(i=0;i<20;++i)
		arr[i]=0;
	for(i=1;i<=nodes;++i){
		//cout << "dist of "<< i << " from node 1 is "<< dist[i] <<endl;
		++arr[dist[i]];
	}
	for(i=0;i<20;++i){
		if(arr[i]!=0){
			cout << arr[i] <<" : number of nodes present at" << (i+1) << endl;
		}
	}
}

 int main()
{

	int i=0,j=0,nodes=0,edges=0;
	cout << "Enter the nodes and edges" << endl;
	cin >> nodes >> edges;
	int x,y;
	cout << "Enter the nodes btw which edges  is present"<<endl;
	for(i=0;i<edges;++i){
		cin >> x >> y ;
        adj[x].push_back(y);
        adj[y].push_back(x);
	}
	
	bfs(1,nodes);
	

	return 0;
}