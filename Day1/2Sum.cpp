#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int t)
{
 
   
    int i = 0, j = v.size()-1;
    cout<<t<<endl;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (v[mid] == t)
            return mid;
        else if (v[mid] > t)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return -1;
}
pair<int, int> find2Sum(vector<int> v, int t)
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        int n2 = binarySearch(v, t-v[i]);
        cout<<n2<<" "<<t-v[i]<<endl;
        if (n2 != -1)
            return {i, n2};
    }
    return {-1, -1};
}
int main()
{
    vector<int> v = {2, 7, 6, 10, 8, 3};
    int target = 11;
    pair<int, int> ans = find2Sum(v, target);
    cout << v[ans.first] << " " << v[ans.second] << endl;
    return 0;
}