#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> v(n,-1);
        for(int i=0;i<2*n;i++){
            if(st.empty()){ 
                st.push(i%n);
            }
            else if(nums[st.top()]>nums[i%n]){
                st.push(i%n);
            }else{
                int index;
                while(!st.empty()&&nums[st.top()]<nums[i%n]){
                    index=st.top();
                    st.pop();
                    v[index]=nums[i%n];
                }
                st.push(i%n);
            }
        }
        return v;
    }