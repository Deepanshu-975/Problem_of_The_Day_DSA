bool threeConsecutiveOdds(vector<int>& arr) {
      int start =0 ,end =0 , cnt =0;
      while(end < arr.size())
      {
        if(arr[end]%2 !=0)
        {
            cnt++;
            end++;
        }
        else if(arr[end]%2 ==0)
        {
            cnt =0;
            start =end+1;
            end++;
        }
        if(cnt == 3)
        return true;
      }
      return false;
    }

    // Tc: O(n)
    // Sc: O(1)