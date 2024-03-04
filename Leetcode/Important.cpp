#include <bits/stdc++.h>
/*  For Ordered_Set (Policy based DS) */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define godspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

/* 2-D Matrix Prefix Sum */
vector<vector<int>> PrefixSum(vector<vector<int>> &mat)
{
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> pre(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            pre[i][j] = mat[i - 1][j - 1] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }
    /*
        PrefSum from (i1,j1) to (i2,j2) => preSum[i2][j2] - preSum[i2][j1-1] - preSum[i1-1][j2] + preSum[i1-1][j1-1]
    */
}


int main()
{
    godspeed;
    return 0;
}