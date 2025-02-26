#include <bits/stdc++.h>
using namespace std;

// Fast input for single integer
inline int inp() {
    int x;
    cin >> x;
    return x;
}

// Fast input for list of space-separated integers
inline vector<int> inlt() {
    vector<int> v;
    string line;
    getline(cin >> ws, line); // Read entire line including spaces
    stringstream ss(line);
