#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements (one per line):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // take one element per line
    }

    // precomputation
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter queries (one per line):" << endl;
    while (q--) {
        int num;
        cin >> num;  // read query number line by line
        cout << hash[num] << endl;
    }

    return 0;
}
