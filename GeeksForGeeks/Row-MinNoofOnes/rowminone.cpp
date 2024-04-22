 int minRow(int n, int m, vector<vector<int>> a) {
         int index;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {  // Corrected loop for rows
        int cnt = 0;
        for (int j = 0; j < m; j++) {  // Corrected loop for columns
            if (a[i][j] == 1) {
                cnt++;
            }
        }
        if (mini > cnt) {  // Corrected condition to find minimum
            mini = cnt;
            index = i + 1;  // Adjusted index by adding 1
        }
    }
    return index;
    }

    Tc: o(n*m);
    Sc:o(1);