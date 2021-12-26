vector<vector<int>> rotate_arr(vector<vector<int>> &v) {
    // 2차원 배열의 크기
    int n = v.size();

    vector<vector<int>> rotated_v;
    rotated_v.resize(n);
    for (int i=0; i<n; i++) {
        rotated_v[i].resize(n);
    }

    for (int row=0; row<n; row++) {
        for (int col=0; col<n; col++) {
            int rotated_row = n-1-col;
            int rotated_col = row;
            rotated_v[rotated_row][rotated_col] = v[row][col];
        }
    }

    return rotated_v;
}