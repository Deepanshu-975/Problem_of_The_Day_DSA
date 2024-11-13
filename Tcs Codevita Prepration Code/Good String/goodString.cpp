#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  
  vector<int> a;
  for (auto i : s1) {
    a.push_back((int)i);
  }
  
  // Sort the vector to prepare for binary search
  sort(a.begin(), a.end());

  int res = 0;
  int prev = (int)s1[0];
  
  // Process each character in s2
  for (auto i : s2) {
    int b = (int)i;
    int l = 0, r = a.size() - 1;
    int good = INT_MAX;
    int curr = -1;

    // Binary search to find the closest character
    while (l <= r) {
      int mid = (l + r) / 2;
      
      if (a[mid] == b) {
        curr = a[mid];
        good = 0;
        break;
      }
      else if (a[mid] < b) {
        if (abs(a[mid] - b) < good) {
          good = abs(a[mid] - b);
          curr = a[mid];
        }
        else if (abs(a[mid] - b) == good) {
          if (abs(curr - prev) > abs(a[mid] - prev)) {
            curr = a[mid];
          }
        }
        l = mid + 1;
      }
      else {
        if (abs(a[mid] - b) < good) {
          good = abs(a[mid] - b);
          curr = a[mid];
        }
        else if (abs(a[mid] - b) == good) {
          if (abs(curr - prev) > abs(a[mid] - prev)) {
            curr = a[mid];
          }
        }
        r = mid - 1;
      }
    }
    prev = curr;
    res += good;
  }
  
  cout << res;
  return 0;
}
