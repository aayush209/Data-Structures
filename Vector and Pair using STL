/*Usage Vector and Pair STL in C++*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void vector_print(vector<int>& v){
    vector <int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout << *itr << " ";
    }
    
}

void pair_print(pair<int,string> p){
    cout << p.first << " " << p.second << endl;
}
int main() {
	vector <int> v;
	pair<int , string> p;
	int x,y;
	cin >> x >> y;
	v.push_back(x);
	v.push_back(y);
	
	vector_print(v);
	cout << endl;
	p=make_pair(1,"Abs");pair_print(p);
	p=make_pair(2,"Back");pair_print(p);
	p=make_pair(3,"Chest");pair_print(p);
	p=make_pair(4,"Deltoids");
	
	pair_print(p);
}
