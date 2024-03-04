#include <bits/stdc++.h>
/*  Libraries For Policy based DS */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// less can be changes to greater or less_equal(multiset) as per needs.
#define godspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    godspeed;
    /*
        Ordered_Set
        -> Policy based Data Structure.
        -> has 2 additional operations apart from set operations.
        -> find_by_order (return iterator) and order_of_key are the additional operations.

        Operations that can be done using Ordered Set:
        -> Insert X element in the set.
        -> Remove X element from the set.
        -> Find No. of elements smaller than X in the current set.
        -> Find element present at the Xth index in the current set.
    */

    // Declaration
    ordered_set<int> st;

    // Insert
    st.insert(1);
    st.insert(2);
    st.insert(21);
    st.insert(22);
    st.insert(1); // Only contains unique values.

    // finding kth element
    cout << *st.find_by_order(0) << endl;
    cout << *st.find_by_order(1) << endl;
    cout << *st.find_by_order(2) << endl; // returns iterator

    // finding number of elements smaller than X
    cout << st.order_of_key(2) << endl;
    cout << st.order_of_key(21);
    cout << st.order_of_key(1) << endl;

    // Lower bound and upper bound of X
    cout << *st.lower_bound(1) << endl;
    cout << *st.upper_bound(21) << endl;

    // Remove
    st.erase(1);

    return 0;
}