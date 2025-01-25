#include<iostream>
#include<map>
using namespace std;

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    int elem ;
    cin>>elem;
    arr[i] =elem;
  }

  map<int,int>mpp;
  for(auto it:arr){
    mpp[it]++;
  }

  for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
  }
  return 0;
}