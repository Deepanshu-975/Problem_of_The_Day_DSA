/* Question -: Consider a set of web pages, numbered from 1 to N. Each web page has 
links to one or more web pages. Clicking on a link in a page, takes one to the 
other web page. You are provided numbers of two web pages viz, starting web page 
and end web page. Your task is to find the minimum number of clicks required to 
reach the end page from the start page. If end page cannot be reached from start 
page, print -1 as the output. For better understanding refer Examples section */

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int find_minClicks(int N,vector<vector<int>> &pages ,int &start ,int &end){
  vector<bool>visited(N+1,false);
  queue<pair<int,int>>q;
  q.push({start,0});

  while(!q.empty()){
    int curr_page =q.front().first;
    int clicks =q.front().second;
    q.pop();
    visited[curr_page] =true;

    if(curr_page == end)
    return clicks;

  for(int link_page : pages[curr_page]){
    if(!visited[link_page]){
      q.push({link_page,clicks+1});
    }
  }
  }

  return -1;
}

int main()
{
  int N;
  cin>>N;
 vector<vector<int>> pages(N + 1);

  for(int i=1;i<=N;i++){
    cout<<"Enter num links for page "<< i <<endl;
    int num_links;
    cin>>num_links;
    pages[i].resize(num_links);

    for(int j=0;j<num_links;j++)
    {
      cout<<"Enter links : "<< j<<endl;
      cin >> pages[i][j];
    }
  }
  int start  ,end;
  cout<<"Enter start and end page"<<endl;
  cin>>start>>end;

  int result =find_minClicks(N,pages,start,end);
  cout<<result<<endl;
return 0;
}