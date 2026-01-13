#include<bits/stdc++.h>
using namespace std;

int main(){
    int numbers[15];

    cout<<"cool"<< endl;
    cout<<numbers[0]<< endl;

    int third[10] = {5,7,11};

    cout<<"printing the array: "<< endl;
    for(int i=0;i<10;i++){
        cout<<third[i]<< " ";
    }

    int thirstSize = sizeof(third)/sizeof(int);
    cout<< "\nSize of third array is: " << thirstSize << endl;

    return 0;
}