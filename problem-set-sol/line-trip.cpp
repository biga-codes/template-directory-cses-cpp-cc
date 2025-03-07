

// Problem: Line Trip
// Starters 13 Division 2 (Rated)
#include <bits/stdc++.h>

using namespace std;
 
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';

   // not necessarily always the mininmum: cout << " "<<(2*(x-prev))<<'\n';
   //we only need to start from 0 not 1 , since refuel from first instance

  }
}

/* You safely reach from point 0 to point a. Hence, you need at least (a - 0).
You safely reach from point a to point b. Hence, you need at least (b - a).
You safely reach point x. But notice that there’s no gas station at point x, so with the same fuel, you need to come back to point b again. Hence, we need at least 2 * (x - b) capacity.
Next, you need to reach point a from point b. This has a contribution of (b - a) which is already included in step 2.
Finally, you also need to reach point 0 from point a. This has a contribution of (a - 0), which is already counted in the first step.
Hence, minimum total capacity: max((a - 0), (b - a), 2(x - a)). */
// Link: https://codeforces.com/problem/B With n stations, the minimum total cost capacity is
//max((a[0] - 0), (a[1] - a[0]), ..., (a[n - 1] - a[n - 2]), 2(x - a[n - 1])) */