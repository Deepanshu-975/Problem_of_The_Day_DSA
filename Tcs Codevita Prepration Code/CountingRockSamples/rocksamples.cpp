/*Question – : Juan Marquinho is a geologist and he needs to count rock 
samples in order to send it to a chemical laboratory. He has a problem: 
The laboratory only accepts rock samples by a range of its size in 
ppm (parts per million).

Juan Marquinho receives the rock samples one by one and he classifies 
the rock samples according to the range of the laboratory. This process is 
very hard because the number of rock samples may be in millions.

Juan Marquinho needs your help, your task is to develop a program to get the 
number of rocks in each of the ranges accepted by the laboratory.

Input Format: An positive integer S (the number of rock samples) separated by a 
blank space, and a positive integer R (the number of ranges of the laboratory); 
A list of the sizes of S samples (in ppm), as positive integers separated by space 
R lines where the ith line containing two positive integers, space separated, 
indicating the minimum size and maximum size respectively of the ith range.

Output Format: R lines where the ith line contains a single non-negative integer 
indicating the number of the samples which lie in the ith range. */

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n , m , l , r ;
  cin>> n >> m;

  vector<int> a(n) ,ans;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  while(m--){
    int cnt =0 ;
    cin>>l >>r;
    for(auto i:a)
    {
      if(i >=l && i<=r){
        cnt++;
      }
    }
      ans.push_back(cnt);
  }

  for(auto i:ans)
  cout<<i<<endl;
}