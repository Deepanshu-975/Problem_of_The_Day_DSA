  
  // tc: o(n) , sc :o(n)
  vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int maxSum =0;
        vector<int> ans;
        unordered_map<int , vector<int>>sumToElements;

        for(int i=nums.size() -1 ;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                maxSum = max(maxSum ,i+j);
                sumToElements[i+j].push_back(nums[i][j]);
            }
        }

        for(int i=0;i<=maxSum ; i++){
            for(auto el: sumToElements[i]){
                ans.push_back(el);
            }
        }

        return ans;
    }

// dfs approch
     vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n =nums.size();
      vector<int> ans;
      queue<pair<int, int>> q;
      q.push({0 , 0});

      while(!q.empty()){
              int i =q.front().first;
              int j =q.front().second;
              q.pop();

              ans.push_back(nums[i][j]);

              if(!j && i + 1 < n) q.push( {i + 1, 0} );
            if(j + 1 < nums[i].size()) q.push( {i, j + 1} );
          }
      
      return ans;
    }