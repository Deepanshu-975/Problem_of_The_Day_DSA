vector<int> constructList(int q, vector<vector<int>> &queries) {
        int x =0;
        vector<int>ans;
        ans.push_back(x);
        for(int i=0;i<q;i++)
        {
           x =queries[i][0];
           if(x ==0)
           ans.push_back(queries[i][1]);
           else
           {
               x =queries[i][1];
               for(int i=0;i<ans.size();i++)
               ans[i] = x^ans[i];
           }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }

    // The above code gives me tle error so i have to imporve it little bit 

    vector<int> constructList(int q, vector<vector<int>> &queries) {
        int cxor =0;
        vector<int>ans;
        ans.push_back(cxor);
        for(int i=0;i<q;i++)
        {
           int type = queries[i][0];
           int value= queries[i][1];
           
           if(type==0)
           {
               ans.push_back(value ^ cxor);
           }
           else{
               cxor ^=value;
           }
        }
        
        for(int &num:ans)
        num ^=cxor;
        
        sort(ans.begin(),ans.end());
        return ans;
    }

    Tc : O(q+n log n)
    Sc :  O(n)