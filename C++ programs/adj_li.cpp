#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> adj[10];
 int main(int argc, char const *argv[])
{
	/* code */
	cout <<"Enter the number of nodes and edges\n";
	int i,j,x,y,nodes,edges;
	cin >> nodes >> edges;
	cout << "Enter the nodes between which edge are present\n";
	for(i=0;i<edges;++i){
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for(i=1;i<=nodes;++i){
		cout <<"Adjancy list of node "<< i<<" : ";
		for(j=0;j<adj[i].size();++j){
			if (j==adj[i].size()-1)
			{
				/* code */
				cout<<adj[i][j]<<endl;
			}
			else {
				cout << adj[i][j]<< " -- ";
			}
		}
	}
	return 0;
}
