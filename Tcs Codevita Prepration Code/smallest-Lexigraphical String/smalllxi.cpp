#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string smallestLexiographicalString(string P,string S){
  // create a vector to store the order of char in P
  vector<int>order(26,0);
  for(int i=0;i<26;i++)
  {
    order[P[i] - 'a'] =i;
  }

  // Sort string S using the order specialized in P
  sort(S.begin(),S.end(),[&](char a,char b){
    return order[a-'a'] < order[b-'a'];
  });
  return S;
}

int main(){
  int T;
  cout<<" Enter the no of test cases :";
  cin>>T;
  vector<string>results;
  for(int i=0;i<T;i++)
  {
    string P ,S;
    cin>> P >> S;

    string result =smallestLexiographicalString(P,S);
    results.push_back(result);
  }
  for(string res: results)
  cout<<res<<endl;

return 0;
}