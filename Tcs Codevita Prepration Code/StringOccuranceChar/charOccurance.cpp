#include<bits/stdc++.h>
using namespace std;

int count_occurances(string S,int p){
  vector<int>char_count(26,0);
  int res =0;

  for(int i=0;i<p-1;i++)
  {
    char_count[S[i]-'a']++;
  }

  res =char_count[S[p-1] -'a'];
  return res;
}
int main()
{
  int N ,Q;
  cin>>N;
  string S;
  cin >> S;
  cin >> Q;

  for(int i=0;i<Q;i++)
  {
    int P;
    cin >>P;
    int result =count_occurances(S,P);
    cout<<"result of "<<P<<" : "<<result<<endl;
  }
}