#include<iostream>
#include<vector>
using namespace std;

// tc : o(n * log n) 
// sc : o(n)
int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    int cnt = 0;
    vector<double> timeToCity(dist.size());

    for (int i = 0; i < dist.size(); i++) {
        // Calculate the time it takes for each monster to reach the city.
        timeToCity[i] = (double)dist[i] / speed[i];
    }

    // Sort the monsters by the time it takes to reach the city.
    sort(timeToCity.begin(), timeToCity.end());

    double time = 0.0;
    
    for (int i = 0; i < timeToCity.size(); i++) {
        if (timeToCity[i] <= time) {
            // If the monster reaches the city at the same time the weapon is charged, you lose.
            break;
        } else {
            // Eliminate the monster and increment the count.
            time += 1.0;  // It takes 1 minute to charge the weapon.
            cnt++;
        }
    }

    return cnt;
}

//tc : o(n) 
// sc :o(n)
    int eliminateMaximum(std::vector<int>& dist, std::vector<int>& speed) {
        int n = dist.size();
        for (int i = 0; i < n; ++i) {
            dist[i] = std::ceil(static_cast<double>(dist[i]) / speed[i]);
            speed[i] = 0;
        }
        for (int num : dist) {
            if (num >= n) continue;
            speed[num] += 1;
        }
        for (int i = 1; i < n; ++i) {
            speed[i] += speed[i - 1];
            if (speed[i] > i) {
                return i;
            }
        }
        return n;
    }
