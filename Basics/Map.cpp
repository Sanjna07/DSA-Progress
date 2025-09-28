#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>> n;
    int arr[n];
    cout<<"Enter array elements (one per line):"<<endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i]; //take one element per line
    }

    //precomputation
    map<int,int> mpp;
    for (int i = 0 ; i<n ; i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    cout<<"Enter queries (one per line):"<<endl;
    while(q--){
        int number ;
        cin>>number; //read query number line by line
        //fetch
        cout << mpp[number] << endl;
    }

    return 0;
}