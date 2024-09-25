long long minCost(vector<long long>& arr) {
        
        priority_queue<long long ,vector<long long> , greater<long long>>pq;
        for(long long i=0;i<arr.size();i++)
        {
            pq.push(arr[i]);
        }
        long long sum =0;
        while(pq.size() >1)
        {
            long long n1 =pq.top();
            pq.pop();
            long long n2 =pq.top();
            pq.pop();
            
            long long ans =n1+n2;
            sum +=ans;
            pq.push(ans);
            
        }
        return sum;
    }

    // Tc: O(n log n)
    // Sc: O(n)