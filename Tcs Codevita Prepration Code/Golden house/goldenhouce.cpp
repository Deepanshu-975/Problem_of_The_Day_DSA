#include<iostream>
#include <climits> 
#include<vector>
using namespace std;

vector<int> findRooms(int N,int K,const vector<int>& coins){
  int start =0 ,end=0 , currentsum =0;
  vector<int> result = {0,INT_MAX};

  while(end < N){
    currentsum += coins[end];
    while(currentsum > K){
      currentsum -= coins[start];
      start++;
    }
    if(currentsum == K && (end-start) < (result[1]-result[0])){
      result[0] = start;
      result[1] = end;
    }
    end++;
  }

  if(result[1] == INT_MAX){
    cout<<"No such subarray exists"<<endl;
    return {-1,-1};
  }

  return result;
}

int main(){
  int N,K;
  cout<<"Enter the number of rooms: ";
  cin>>N;
  cout<<"Enter the total number of gold coins: ";
  cin>>K;
  vector<int> coins(N);
  cout<<"Enter the number of coins in each room: ";
  for(int i = 0; i < N; i++){
    cin>>coins[i];
  }
  vector<int> result = findRooms(N,K,coins);
  cout<<"Enter room no : "<<result[0]+1<<" and Exit room no "<<result[1]+1<<endl;

  return 0;
}