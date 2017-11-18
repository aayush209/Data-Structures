/*Sample Input*/
7
3 4 1
3 2 1
4 5 1
1 5 4
1 2 1
2 5 3
6 4 2

/*Sample Output*/
1 : [4 , 5] [1 , 2] 
2 : [1 , 3] [1 , 1] [3 , 5] 
3 : [1 , 4] [1 , 2] 
4 : [1 , 3] [1 , 5] [2 , 6] 
5 : [1 , 4] [4 , 1] [3 , 2] 
6 : [2 , 4] 

/*Usage Vector and Pair STL in C++*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    /*n is the nodes in the graph 
	v1 starting node
	v2 ending node
	w weight of the edge connecting v1 and v2*/
	
	int n,v1,v2,w;
	map <int , vector<pair<int,int>>> AdjacencyList ;/*Maps the Node v1 no. with a pair<w,v2>*/
	map <int , vector<pair<int,int>>> :: iterator itr;
	cin >>n;

	for(int i=0;i<n;i++)
	{//for undirected graph
	    cin >> v1 >> v2 >> w ;
	    AdjacencyList[v1].push_back(make_pair(w,v2));   
	    AdjacencyList[v2].push_back(make_pair(w,v1));//exclude this statement for Directed graph
	}
	
	for(itr=AdjacencyList.begin();itr!=AdjacencyList.end();itr++)
	{
	    vector<pair<int,int>> temp = itr -> second;
	    cout << itr->first << " : ";
	    for(int i=0;i<temp.size();i++)
	    cout << "[" << temp[i].first <<" , " << temp[i].second << "] " ;
	    
	    cout << endl ;
	}
	
}
