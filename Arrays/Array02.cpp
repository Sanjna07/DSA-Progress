#include<bits/stdc++.h>
using namespace std;

// left rotate array by 1 elements

int leftRotateByOne(int arr[], int n) {
    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] =  arr[i + 1];
    }
    arr[n - 1] = first;
    return 0;
}

int main() {
     int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    leftRotateByOne(a, n);
    cout << "Array after left rotation by one: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}