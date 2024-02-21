int rangeBitwiseAnd(int left, int right) {
        int ans =0;
        while(left !=right)
        {
            left >>= 1;
            right >>=1;
            ans++;
        }
        return (left << ans);
    }

    // tc : o(logn)
    // sc: o(1)