 string reversePrefix(string word, char ch) {
        int start =0 ,end =-1;
        if(word.size() == 0)
        return "";
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i] == ch)
            {
               end =i;
               break;
            }
            
        }
         if (end == -1) {
        return word;
    }
        while(start<=end)
        {
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }