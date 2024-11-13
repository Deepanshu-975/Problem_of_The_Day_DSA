// // Question -: A positive integer d is said to be a factor of another positive 
// integer N if when N is divided by d, the remainder obtained is zero.
// For example, for number 12, there are 6 factors 1, 2, 3, 4, 6, 12.
// Every positive integer k has at least two factors, 1 and the number
// k itself.Given two positive integers N and k, write a program to print
// the kth largest factor of N.
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n ,k ,i ,cnt=0;
  cout<<"Enter the number and k :";
  cin>>n>>k;

  for(i =n;i>=1;i--){
    if(n%i == 0) cnt++;
    if(cnt == k)
    {
    cout<<i;
    break;
    }

  }
  if(cnt < k)
  cout<<1;
return 0;

}