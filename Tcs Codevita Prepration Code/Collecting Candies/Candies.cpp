/*Question:- Krishna loves candies a lot, so whenever he gets them, 
he stores them so that he can eat them later whenever he wants to.
He has recently received N boxes of candies each containing Ci candies 
where Ci represents the total number of candies in the ith box. Krishna 
wants to store them in a single box. The only constraint is that he can 
choose any two boxes and store their joint contents in an empty box only. 
Assume that there are an infinite number of empty boxes available.
At a time he can pick up any two boxes for transferring and if both the boxes 
contain X and Y number of candies respectively, then it takes him exactly X+Y 
seconds of time. As he is too eager to collect all of them he has approached 
you to tell him the minimum time in which all the candies can be collected.*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int numofBox  ,firstCandy ,secondCandy ,sum =0 ,totalTime;
  int ans[1000];
  cout<<"Enter number of boxes : "; 
  cin >> numofBox;

 cout<<"Enter no of candies in each box";
  for(int i=0;i<numofBox;i++){
    cin>>ans[i];
  }

 firstCandy =ans[0];
 secondCandy =ans[1];
  sum =firstCandy+secondCandy;
  totalTime =sum;
  for(int i=2;i<numofBox;i++)
  {
    sum +=ans[i];
    totalTime +=sum;
  }
  cout<<totalTime;
  return 0;
}