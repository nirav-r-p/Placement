#include <bits/stdc++.h>
#include<cstring>
using namespace std;

// MIN_CHANGES_DISTINCT
// Problem Statement:
// Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.

// Note: length of string is atmost 26.

// Input:
// The first line contains an integer T, number of test cases. For each testcase there is only one line containing s, a string of atmost 26 characters.

// Example 1:
// Input
// 3
// aab
//-- a b 3-2=1
// aebaecedabbee
//----- a e b c d ==13-5=8
// ab

// Output
// 1
// 8
// 0

// Testcase 1: If we change one instance of 'a' to any character from 'c' to 'z', we get all distinct substrings. Testcase 2: We need to change 2 a's, 2 b's and 4 e's to get distinct substrings. Testcase 3: As no change is required hence 0.
vector<int> generateFibonacci(int n)
{
    // Write your code here
    int Mod = 1000000007;
    vector<int> v(n + 1, -1);
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            v[i] = 1;
        else if (i == 1)
            v[i] = 2;
        else
            v[i] = (v[i - 1] + v[i - 2]) % Mod;
    }
    return v;
}
int funGet(char str[])
{
    int arr[26] = {0};
    int n = strlen(str);
    cout<<"--"<<n<<endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[str[i] - 'a'] >= 1)
            ++count;
        else
            ++arr[str[i] - 'a'];

        cout<<str[i]<<" "<<arr[str[i] - 'a']<<endl;
    }

    return count;
}
// Do not edit this part of code
int main()
{

    int n;
    cin >> n;
    vector<int> fib = generateFibonacci(n);
    cout << fib[n - 1] << "\n";

    static char s[]="aebaecedabbee";
    cout<<s<<endl;
    cout<<funGet(s)<<endl;
    return 0;
}

