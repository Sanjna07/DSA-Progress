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

// left rotate array by d elements

int leftRotateByD(int arr[], int n, int d) {
    d = d % n; 

    int temp[d];
    for(int i = 0; i < d; i++) {
         temp [i] = arr[i];
    }

    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for(int i = n-d; i < n ; i++) {
        arr[i] = temp[i-(n - d)];

    }
    return 0;
}

// Move Zeroes to end of array

void moveZeroes(int arr[], int n) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return ;

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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

    // int d;
    // cout << "Enter the number of positions to left rotate the array: ";
    // cin >> d;

    /*leftRotateByOne(a, n);
    cout << "Array after left rotation by one: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
     */

    // leftRotateByD(a, n, d);
    // cout << "\nArray after left rotation by "<< d <<": ";
    // for(int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }

    moveZeroes(a, n);
    cout << "\nArray after moving zeroes to the end: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}