#include<iostream>
using namespace std;

// dynamic programming approch 
// tc: o(n) , sc: o(1)

int countVowelPermutation(int n) {
        const int mod = 1000000007;

        long countA =1 ,countE =1 ,countI =1,countO =1, countU =1;

        for(int i=1;i<n;i++){
            long nextcountA =countE;
            long nextcountE =(countA + countI)%mod;
            long nextcountI =(countA + countE + countO +countU) %mod;
            long nextcountO =(countI + countU) %mod;
            long nextcountU =countA;

            countA =nextcountA;
            countE =nextcountE;
            countI =nextcountI;
            countO =nextcountO;
            countU =nextcountU;
        }
        long totalcount = (countA + countE +countI +countO +countU) % mod;

        return static_cast<int>(totalcount);
    }