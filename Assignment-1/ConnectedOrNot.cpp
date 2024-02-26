#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);

    }
    for(int i = 0; i < n; ++i){
        for(auto v : mat[i]){
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
