#include<iostream>
using namespace std;

// Time Complexity: O(N)
// Auxiliary Space: O(1)

// approch  1 check base condition if node == null so return first chek for left it it is point to null
// then return and print the root and chek for right if it is points to null then return
// back and this process continues until we dont travers the whole bst 
int isRepresentingBST(int arr[], int N)
    {
        int i,j;
        for(i=0;i<N-1;i++)
        {
            if(arr[i+1]<arr[i])
                return 0;
        }
        return 1;
    }