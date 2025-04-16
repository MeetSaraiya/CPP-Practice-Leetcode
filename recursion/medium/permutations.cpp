#include<iostream>
#include<vector>
using namespace std;

void permutations(vector<int>& arr, int n, int i, vector<vector<int>>& ans) {
    if (i == n) {
        ans.push_back(arr);
        for (int it : arr) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    for (int idx = i; idx < n; idx++) {
        swap(arr[i], arr[idx]);
        permutations(arr, n, i + 1, ans);
        swap(arr[i], arr[idx]);  // Backtrack (restore the original configuration)
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    vector<vector<int>> ans;

    permutations(arr, n, 0, ans);

    return 0;
}
