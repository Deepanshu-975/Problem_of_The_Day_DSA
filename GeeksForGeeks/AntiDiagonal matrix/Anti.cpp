  #include<iostream>
  #include<vector>
  using namespace std;

  void antiDiagonal(int n){
    int arr[n][n];
    int num =1;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j] =num++;
    }
    }

    int numofDiagonals =2*n-1;
    vector<vector<int> > output(numofDiagonals);
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      output[i+j].push_back(arr[i][j]);
    }
    }

    for(int i=0;i<output.size();i++){
    for(int j=0;j<output[i].size();j++){
        cout<<output[i][j]<<" ";
    }
    cout<<endl;
    }
  }

  int main(){
    antiDiagonal(4);
  }