//needs further optimisation

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    const int N = 32;
    int numBlocks = (n + N - 1) / N;
    vector<vector<int>> grid(n, vector<int>(numBlocks, 0));
    
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < n; j++){
            if(s[j]=='1'){
                int block = j / N;
                int pos = j % N;
                grid[i][block] |= (1u << pos);
            }
        }
    }
    
    long long ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int common = 0;
            for (int k = 0; k < (n + N - 1) / N; k++){
                common += __builtin_popcount(grid[i][k] & grid[j][k]);
            }
            ans += (long long)common * (common - 1) / 2;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
