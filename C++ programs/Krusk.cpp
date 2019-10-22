# include <iostream>
# include <bits/stdc++.h>
using namespace std;
const int MAX= 1e4+5;
pair<long long,pair<int,int>> p[MAX];
int id[MAX],nodes,edges;
void init(){
	for (int i = 0; i < MAX; ++i)
	{
		/* code */
		id[i]=i;
	}
}
int root(int x){
	while(id[x]!=x){
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void join(int x,int y){
	int p,q;
	p=root(x);
	q=root(y);
	id[p]=id[q];
}
long long kruskal(pair<long long, pair<int,int> >p[]){
	int i,x,y;
	long long cost,tot=0;
	for(i=0;i<edges;++i){
		cost=p[i].first;
		x=p[i].second.first;
		y=p[i].second.second;
		//cout <<cost<<" "<<x<<" "<<y<<endl;
		if(root(x)!=root(y)){
			//cout <<"Yes\n";
			//cout <<cost<<"+";
			tot+=cost;
			join(x,y);
		}
	}
	return tot;
}
int main(int argc, char const *argv[])
{
	cout << "Enter the number of nodes and edges\n";
	cin >> nodes >> edges;
	init();
	long long weight,final_cost;
	int i,x,y;
	cout <<"Enter the weight and nodes of the respective edges\n";
	for(i=0;i<edges;++i){
		cin >> weight >> x >> y;
		p[i]=make_pair(weight,make_pair(x,y));
	}
	sort(p,p + edges);
	final_cost=kruskal(p);
	cout <<"Minimal spanning tree has weight equal to "<<final_cost<<endl;

	return 0;
}