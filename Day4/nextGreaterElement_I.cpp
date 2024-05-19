#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    int n1 = nums1.size();
    int n2 = nums2.size();
    for (int i = 0; i < n2; i++)
    {
        mp[nums2[i]] = i;
    }
    stack<int> st;
    vector<int> v(n2, -1);
    for (int i = 0; i < n2; i++)
    {
        if (st.empty())
        {
            st.push(i);
        }
        else if (nums2[st.top()] > nums2[i])
        {
            st.push(i);
        }
        else
        {
            int index;
            while (!st.empty() && nums2[st.top()] < nums2[i])
            {
                index = st.top();
                st.pop();
                v[index] = nums2[i];
            }
            st.push(i);
        }
    }
    vector<int> ans(n1, -1);
    for (int i = 0; i < n1; i++)
    {
        ans[i] = v[mp[nums1[i]]];
    }
    return ans;
}