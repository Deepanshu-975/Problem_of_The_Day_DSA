 int grayToBinary(int n)
    {
        int res =0;
        
        while(n)
        {
          res ^=n;
          n=n>>1;
        }
        return res;
        
    }

    Expected Time Complexity: O(log (n)).
Expected Auxiliary Space: O(1).
