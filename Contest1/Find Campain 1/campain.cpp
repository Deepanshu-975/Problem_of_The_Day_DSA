
int findChampion(vector<vector<int>>& grid) {
        int maxi =INT_MIN ,ans =0;
        int n =grid.size();
        
        for(int i=0;i<n;i++){
            int sum =0;
            
            for(int j=0;j<n;j++)
                sum +=grid[i][j];
                
                
                if(sum > maxi){
                    maxi =sum;
                    ans =i;
                }
        }
        return ans;
    }