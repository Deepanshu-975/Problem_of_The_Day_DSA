 vector<int> pattern(int N){
        // code here
        vector<int> result;
        int n = N;
        result.push_back(n);
        while(n>0){
            result.push_back(n-5);
            n -= 5;
        }
        while(n < N){
            result.push_back(n+5);
            n += 5;
        }
        return result;
    }