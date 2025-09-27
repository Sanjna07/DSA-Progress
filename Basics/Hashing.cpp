#include<iostream>
using namespace std;

int func( int num , int arr[]){
    int count = 0;
    for (int i = 0; i < num; i++){
        if (arr[i] == num) count++;
    }
    return count;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    func(10, arr);

    return 0;
}