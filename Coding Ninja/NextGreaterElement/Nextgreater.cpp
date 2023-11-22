#include <bits/stdc++.h> 

// 1 Brute force approch
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans;
    
    for(int i=0;i<n;i++){
        int maxi = -1;
        bool found =false;
        for(int j =i+1;j<n;j++){
            if(arr[j]>arr[i]){
                 maxi =arr[j];
                 found =true;
                 break;   
            }
            
        }
       if(!found){
           ans.push_back(-1);
       }
       else
       ans.push_back(maxi);
    }
 return ans;
}

// optimized approch using stack
// tc : o(n) , sc : o(n)
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans(n,-1);
    stack<int> st;
    
    for(int i=0;i<n;i++){
       while(!st.empty() && arr[i] > arr[st.top()]){
           ans[st.top()] =arr[i];
           st.pop();
       }
       st.push(i);
    }
 return ans;
}