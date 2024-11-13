#include<iostream>
using namespace std;

int zeroCount(int L,int K){
  if(K==0)
  return L;

 if(K == L)
 return 0;
 int max_zero =0;
 if(K>0){
  max_zero =1;
 }
 return max_zero;
}

int main(){
  int L,K;
  cin>>L>>K;
  int res =zeroCount(L,K);
  cout<<res;
  return 0;
}