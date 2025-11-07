#include<bits/stdc++.h>
using namespace std;

// LargestElement

int largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Second Largest/Smallest Element

int SecondLargest(int a[], int n) {
    int largest = a[0];
    int sLargest = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            sLargest = largest;
            largest = a[i];
        } 
        else if(a[i] > sLargest && a[i] < largest) {
            sLargest = a[i];
        }
    }
    return sLargest;
}

int SecondSmallest(int a[], int n) {
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) {
            sSmallest = smallest;
            smallest = a[i];
        } 
        else if(a[i] < sSmallest && a[i] != smallest) {
            sSmallest = a[i];
        }
    }
    return sSmallest;
}

// Remove duplicates from sorted array

int removeDuplicates(int arr[], int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int i = 0;
    for(int j = 0; j < n - 1; j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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
    /* int largest = largestElement(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;*/

    /*int sl = SecondLargest(a,n);
    cout << "The Second largest element in the array is: " << sl << endl;
    int ss = SecondSmallest(a,n);
    cout << "The Second smallest element in the array is: " << ss << endl;*/

    int size = removeDuplicates(a, n);
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    
}