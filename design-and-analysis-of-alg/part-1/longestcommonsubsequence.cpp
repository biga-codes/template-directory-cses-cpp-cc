
int lcs(string text1, string text2, int i, int j) {
```

This means each recursive call **creates a copy** of both strings, which is extremely expensive — especially since your strings are each \~1000 characters long.

---

 Fix: Pass by Reference

Change:

```cpp
int lcs(string text1, string text2, int i, int j)
```

To:

```cpp
int lcs(const string& text1, const string& text2, int i, int j)
```

This avoids copying and will drastically improve performance.

---



```cpp
class Solution {
private:
    vector<vector<int>> c;

public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        c = vector<vector<int>>(m, vector<int>(n, -1));
        return lcs(text1, text2, m - 1, n - 1);
    }

private:
    int lcs(const string& text1, const string& text2, int i, int j) {
        if (i == -1 || j == -1)
            return 0;

        if (c[i][j] != -1)
            return c[i][j];

        if (text1[i] == text2[j])
            c[i][j] = lcs(text1, text2, i - 1, j - 1) + 1;
        else
            c[i][j] = max(lcs(text1, text2, i - 1, j), lcs(text1, text2, i, j - 1));

        return c[i][j];
    }
};
```


 Time & Space Complexity

**Time:** `O(m * n)` — each subproblem is computed once.
**Space:** `O(m * n)` — for memoization table + recursion stack.

