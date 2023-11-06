#include<iostream>
using namespace std;

// brute force approach 
// tc : o(n) , sc :o(1)
int transitionPoint(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++){
            if(arr[i] == 1) 
            {
            return i;
            break;
            }
        }
        return -1;
    }

// optimize code using binary search
// tc : O(log n)  , sc : O(1)
  int transitionPoint2(int arr[], int n) {
        // code here
        int low = 0 , high = n-1 , mid;
        while(low <= high){
            mid = low +(high - low)/2;
            if(arr[mid] == 0)
            {
                low = mid+1;
            }
            else{
                if(mid !=0 &&  arr[mid-1] == 1)
                high = mid-1;
                else
                return mid;
            }
        }
        return -1;
    }   

