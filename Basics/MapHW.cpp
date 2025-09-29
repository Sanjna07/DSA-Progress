// Question: Find the highest/lowest frequency element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++){ 
        cin >> arr[i];
    }
    //pre compute
    unordered_map<int, int> freq;
    for (int x : arr) 
    freq[x]++;
    int highestFreq = 0, lowestFreq = INT_MAX;
    int highElem = -1, lowElem = -1;


    for (auto &p : freq) {
        if (p.second > highestFreq) {
            highestFreq = p.second;
            highElem = p.first;
        }
        if (p.second < lowestFreq) {
            lowestFreq = p.second;
            lowElem = p.first;
        }
    }

    cout << "Highest Frequency Element: " << highElem 
         << " (freq = " << highestFreq << ")\n";
    cout << "Lowest Frequency Element: " << lowElem 
         << " (freq = " << lowestFreq << ")\n";

    return 0;
}
