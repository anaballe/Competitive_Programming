# include <iostream>
# include <bits/stdc++.h>
using namespace std;
vector<int> adj[10];
bool vis[10];
void dfs(int x){
	vis[x]=true;
    int i;
	for(i=0;i<adj[x].size();++i){
		if(vis[adj[x][i]]==false){
            dfs(adj[x][i]);
		}
	}
}
int main(){
	int i,j,nodes,edges,x,y,a,count =0;
	cout <<"Enter the number of nodes and edges" << endl;
	cin >> nodes >> edges ;
	cout << "Enter the pair of nodes btw which edges exists" << endl;
	for(i=0;i<edges;++i){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(i=0;i<10;++i)
		vis[i]=false;
	cout << "Enter the nodes from which other nodes need to be checked " << endl;
	cin >> a;
    dfs(a);
    for(i=1;i<=nodes;++i){
    	if(vis[i]==false)
    		++count;
    }
    cout << "number of such nodes are " << count << endl;

}