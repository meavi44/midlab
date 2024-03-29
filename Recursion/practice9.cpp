// combination sum
// arr[2 3 6 7] target 7
// output
// arr[2 2 3] arr[7]


#include<bits/stdc++.h>
using namespace std;

void target(vector<int>& arr, int idx, int key, vector<int>& result) {
    if (key == 0) {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        return;
    }
    if (key < 0 || idx == arr.size()) {
        return;
    }
    
    // Include current element
    result.push_back(arr[idx]);
    target(arr, idx, key - arr[idx], result);
    result.pop_back(); // Backtrack
    
    // Exclude current element
    target(arr, idx + 1, key, result);
}

int main() {
    int n, targetSum;
    cin >> n;
    vector<int> arr(n);
    vector<int> result;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> targetSum;
    
    target(arr, 0, targetSum, result);
    return 0;
}
