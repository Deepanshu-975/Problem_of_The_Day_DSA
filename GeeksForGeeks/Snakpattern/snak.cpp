 #include <iostream>
#include <vector>
using namespace std;
 
 vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n =matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                // left to right
                for(int j=0;j<n;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                // right to left
               for(int j=n-1;j>=0;j--){
                    ans.push_back(matrix[i][j]);
                } 
            }
        }
        return ans;
    }