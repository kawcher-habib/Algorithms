#include<bits/stdc++.h>
using namespace std;
//const int N = 1e5+5;
//vector<int> v[N];
//bool vis[N];
int main(){
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
        while(e--){
            int a, b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);

        }
        for(int child: v[0]){
            cout<<child;
        }
}
