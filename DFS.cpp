/*Usage Vector and Pair STL in C++*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
map <int , vector<pair<int,int>>> AdjacencyList ;/*Maps the Node v1 no. with a pair<w,v2>*/
map <int , vector<pair<int,int>>> :: iterator itr;
int n;

void (int startingnode,int n){
    bool visited[n];
    memset(visited, 0, sizeof(visited));
    
    visited[startingnode]=true;
    for(int i-0;AdjacencyList[u].size();i++){
        int v =AdjacencyList[startingnode][i];
        if(visited[v]!=true){
            dfs(v);
        }
    }
    
}

int main() {
    /*n is the nodes in the graph 
	v1 starting node
	v2 ending node
	w weight of the edge connecting v1 and v2*/
	
	int v1,v2,w;
	
	cin >>n;

	for(int i=0;i<n;i++)
	{//for undirected graph
	    cin >> v1 >> v2 >> w ;
	    AdjacencyList[v1].push_back(make_pair(w,v2));   
	    AdjacencyList[v2].push_back(make_pair(w,v1));//exclude this statement for Directed graph
	}
	
	dfs(1);
}
