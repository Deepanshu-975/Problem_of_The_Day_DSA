<<<<<<< HEAD
#include <vector>
using namespace std;

// optimized version
//  tc : o(n) , sc :o(n)
vector<long long> nthRowOfPascalTriangle(int n) {
    int mod = 1e9 + 7;
    vector<long long> ans(n, 0);
    ans[0] = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0; --j) {
            ans[j] = (ans[j] + ans[j - 1]) % mod;
        }
    }

    return ans;
}



//  tc:o(n^2)
// sc :o(1)
 vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
      
        int mod = 1e9 + 7;
        vector<long long> ans(n, 0);
        ans[0] = 1;
        for(int i = 1; i < n; i++){
            for(int j = i; j >= 0; j--){
                ans[j+1] += ans[j];
                ans[j+1] %= mod;
            }
        }
        
        return ans;
=======
#include <vector>
using namespace std;

// optimized version
//  tc : o(n) , sc :o(n)
vector<long long> nthRowOfPascalTriangle(int n) {
    int mod = 1e9 + 7;
    vector<long long> ans(n, 0);
    ans[0] = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0; --j) {
            ans[j] = (ans[j] + ans[j - 1]) % mod;
        }
    }

    return ans;
}



//  tc:o(n^2)
// sc :o(1)
 vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
      
        int mod = 1e9 + 7;
        vector<long long> ans(n, 0);
        ans[0] = 1;
        for(int i = 1; i < n; i++){
            for(int j = i; j >= 0; j--){
                ans[j+1] += ans[j];
                ans[j+1] %= mod;
            }
        }
        
        return ans;
>>>>>>> 24694c16372f1391a6ccdfdcb19b9d545dabcfe5
    }