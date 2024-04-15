// Brute force approch 
// https://www.geeksforgeeks.org/problems/count-the-elements1529/1

vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
    vector<int> ans;

    for (int i = 0; i < q; i++) {
        int cnt = 0;
        int x = query[i];
        for (int j = 0; j < n; j++) {
            if (b[j] <= a[x]) {
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    return ans;
}

// Tc : o(n^2)
// sc : o(n)




//optimized method 

vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
       vector<int>ans;
        sort(b.begin(),b.end());
        for(int i=0;i<q;i++) {
            int val = query[i];
            int sval = a[val];
            int count = upper_bound(b.begin(),b.end(),sval)-b.begin();
            ans.push_back(count);
        }
        return ans;
    }

    Tc : o(nlog n);
    sc : o(n)