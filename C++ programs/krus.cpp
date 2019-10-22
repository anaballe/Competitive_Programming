# include <iostream>
# include <bits/stdc++.h>
using namespace std;
# define MAX 10000000
pair<int,pair<int,int>> p[MAX];
int id[MAX];
int edges,nodes;
void  initialise(){
	for(int i=0;i<MAX;++i){
		id[i]=i;
	}
}
int root(int x){
	while(x != id[x]){
		id[x] = id[id[x]];
		x = id[x];
	}
	return x;
}
void union1(int x,int y){
	int p = root(x);
	int q = root(y);
	id[p] = id[q];
}
int kruskal(pair<int,pair<int,int>> p[]){
	int minimumCost=0;
	int x,y; 
	int cost = 0;
	for(int i=0;i<edges;++i){
		x = p[i].second.first;
		y = p[i].second.second;
		cost = p[i].first;
		if(root(x) != root(y)){
			minimumCost+=cost;
			union1(x,y);
		}
	}
	return minimumCost;
}
int main(int argc, char const *argv[])
{
	initialise();
	//cout << "Enter the number of nodes and edges "<<endl;
	cin >> nodes >> edges;
	int x,y,weight;
	//cout << "Enter the nodes and the weight of the edge "<< endl;
	for(int i=0;i< edges;++i){
		cin >> x >> y >> weight;
		p[i] = make_pair(weight,make_pair(x,y));
	}
	sort(p,p+edges);
	int minimumCost = kruskal(p);
	cout << minimumCost << endl;
	return 0;
}