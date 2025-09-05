#include<iostream>
using namespace std;

int count = 0;

void f(){
    if (count == 5) 
    return;
    cout<<count<<endl;
    count++;
    f();
}
//print name n times
int name(int i,int n){
    if (i>n) 
    return 0;
    cout<<"Sanjana"<<endl;
    name(i+1,n);
}

//print 1 to n
int num(int i,int n){
    if (i>n) 
    return 0;
    cout<< i <<endl;
    num (i+1,n);
}

//print n to 1
int rev(int i,int n){
    if (i<1) 
    return 0;
    cout<< i <<endl;
    rev(i-1,n);
}

main(){
    //f();
    int n;
    cin>>n;
    //name(1,n);
    //num(1,n);
    rev(n,n);
    return 0;
}