<<<<<<< HEAD

// tc : o(nlogn) 
// sc : o(log n) or 
int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans =0;
        for(int i= piles.size() / 3;i <piles.size(); i +=2){
            ans +=piles[i];
        }

        return ans;
=======

// tc : o(nlogn) 
// sc : o(log n) or 
int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans =0;
        for(int i= piles.size() / 3;i <piles.size(); i +=2){
            ans +=piles[i];
        }

        return ans;
>>>>>>> 24694c16372f1391a6ccdfdcb19b9d545dabcfe5
    }