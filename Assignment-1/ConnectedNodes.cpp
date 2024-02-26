#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
int n, e;
cin>>n>>e;
vector<int> mat[n];
while(e--){
    int a,b;
    cin>>a>>b;
    mat[a].push_back(b);
    mat[b].push_back(a);
}
int q;
cin>>q;
for(int i =0; i<q; i++){
    int x;
    cin>>x;
    sort(mat[x].rbegin(), mat[x].rend());

        if(mat[x].empty()){
            cout<<"-1";
        }else{
            for(int j = 0; j<mat[x].size(); j++){
        cout<<mat[x][j]<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}

//Problem Statement

//You will be given an undirected graph as input. Then you will be given  queries. For each query you will be given a node . You need to print the nodes that are connected with  in descending order.

//Note: If there is no node connected to , then print -1.

