#include<bits/stdc++.h>
using namespace std;

// Function to generate subsets recursively
void subset(vector<int>& v, int i, int n, string result) {
    // Base case: if i reaches the size of the array
    if (i == n) {
        cout << "[" << result << "]" << endl;
        return;
    }

    // Include current element in the subset
    subset(v, i + 1, n, result + to_string(v[i]) + " ");

    // Exclude current element from the subset
    subset(v, i + 1, n, result);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
   
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    string result = "";
    subset(v, 0, n, result);
    
    return 0;
}
