<<<<<<< HEAD
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
=======
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
>>>>>>> 24694c16372f1391a6ccdfdcb19b9d545dabcfe5
    // sc: o(1)