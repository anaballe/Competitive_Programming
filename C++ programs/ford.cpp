# include <iostream>
# include <bits/stdc++.h>
using namespace std;
//const int MAX=1e9;
vector<int> p[2000+20];
int dist[1000+10];
int main(int argc, char const *argv[])
{
	int i,j,x,y,w,nodes,edges,t;
	cout <<"Enter the number of nodes and edges\n";
	cin >> nodes >> edges;
	for(i=0;i<edges+2;++i){
		dist[i]=2e9;
		//p[i].clear();
	}
	cout << "enter the nodes between which weight exists and the weight\n";
	for(i=0;i<edges;++i){
		cin >> x >> y >> w;
		p[i].push_back(x);
		p[i].push_back(y);
		p[i].push_back(w);
	}
	/*for (i = 0; i < edges; ++i)
	
		
		cout << p[i][0] <<" "<< p[i][1]<<" "<< p[i][2]<<endl;
	}*/
	j=0;
	t=1;
	dist[t]=0;
	for(i=0;i<nodes-1;++i){
		j=0;
		while(p[j].size()!=0){
			if(dist[p[j][0]]+p[j][2]<dist[p[j][1]]){
				dist[p[j][1]]=dist[p[j][0]]+p[j][2];
			}
			++j;
		}
	}
	for(i=1;i<=nodes;++i){
		if(i==t)
			continue;
		cout <<"distance from node "<<t<<" to node "<<i<<" is "<<dist[i]<<endl;
	}
	return 0;
}