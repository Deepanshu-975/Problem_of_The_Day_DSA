// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Function to find the maximum number of bags that can be sold
// int maxBagsSold(int n, int m, vector<pair<int, int>>& riceBags, vector<pair<int, int>>& customers) {
//     // Sort rice bags by price in ascending order
//     sort(riceBags.begin(), riceBags.end());
    
//     // Sort customers by their maximum price in ascending order
//     sort(customers.begin(), customers.end());

//     vector<bool> sold(m, false);  // Track if a bag is sold
//     int count = 0;  // Track the number of bags sold

//     // For each customer, try to find a suitable rice bag
//     for (int i = 0; i < n; i++) {
//         int maxPrice = customers[i].first;
//         int minQuantity = customers[i].second;
        
//         // Find the first unsold rice bag that meets the customer's conditions
//         for (int j = 0; j < m; j++) {
//             int bagPrice = riceBags[j].first;
//             int bagQuantity = riceBags[j].second;
            
//             if (!sold[j] && bagPrice <= maxPrice && bagQuantity >= minQuantity) {
//                 // Bag meets customer's conditions; mark it as sold
//                 sold[j] = true;
//                 count++;
//                 break;  // Move to the next customer
//             }
//         }
//     }
    
//     return count;  // Return the total number of bags sold
// }

// int main() {
//     int n, m;
//     cout << "Enter the number of customers and rice bags: ";
//     cin >> n >> m;

//     vector<pair<int, int>> riceBags(m);
//     vector<pair<int, int>> customers(n);

//     cout << "Enter the price and quantity for each rice bag:\n";
//     for (int i = 0; i < m; i++) {
//         cin >> riceBags[i].first >> riceBags[i].second;  // (price, quantity)
//     }

//     cout << "Enter the max price and min quantity for each customer:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> customers[i].first >> customers[i].second;  // (maxPrice, minQuantity)
//     }

//     int result = maxBagsSold(n, m, riceBags, customers);
//     cout << "Maximum number of bags sold: " << result << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector< vector< int>> cust;
    for(int i=0; i< n; i++){
        int q,p;
        cin>>q>>p;
        cust.push_back({p,q});
    }
    vector< vector< int>> rice;
    for(int i=0; i< m; i++){
        int q,p;
        cin>>q>>p;
        rice.push_back({p,q});
    }
    sort(cust.begin(), cust.end());
    sort(rice.begin(), rice.end());
    vector< int> good(m,0);
    int ans = 0;
    for(int i=0; i< n; i++){
        int quan = -1;
        int index = -1;
        for(int j=0; j< m; j++){
            if(!good[j]){
                if(rice[j][0] > cust[i][0]) break;
                if(rice[j][1] > cust[i][1]){
                    if(quan == -1){
                        quan = rice[j][1];
                        index = j;
                    }
                    else{
                        if(quan > rice[j][1]){
                            index = j;
                            quan = rice[j][1];
                        }
                    }
                }
            }
        }
        if(index != -1){
            good[index] = 1;
            ans++;
        }
    }
    cout<< ans;
}