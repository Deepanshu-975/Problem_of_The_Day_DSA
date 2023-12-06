// Time Complexity: O((R-L)*log(R))
// Space Complexity: O(1) 
int countX(int L, int R, int X) {
        // code here
        int count =0;
        for(int i=L+1; i<= R-1;i++){
            int temp= i;
           while (temp > 0) {
            int digit = temp % 10;
            if (digit == X) {
                count++;
            }
            temp /= 10;
        }
        }
        return count;
    }