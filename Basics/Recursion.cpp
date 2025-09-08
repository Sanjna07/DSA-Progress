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

//Backtracking

int numb(int i,int n){
    if (i<1) 
    return 0;
    numb(i-1,n);
    cout<< i <<endl;
}

//Sum of n numbers
//1 parameterized
int  add (int i ,int sum){
    if (i<1) {
        cout<<sum<<endl;
        return 0;
    }
    add(i-1,sum+i);
}

//Functinal
int add1(int n){
    if (n==0) 
    return 0;
    return n + add1(n-1);
}
//factorial of n
int fact(int n){
    if (n==0) 
    return 1;
    return n * fact(n-1);
}

// reverse a array
void Arr(int l , int r, int a[]){
    if (l>=r) 
    return;
    swap(a[l],a[r]);
    Arr(l+1,r-1,a);
}

void revArr(int i, int n, int a[]){
    if (i>=n/2) 
    return;
    swap(a[i],a[n-i-1]);
    revArr(i+1,n,a);
}

main(){
    //f();
    int n;
    cin>>n;
    //name(1,n);
    //num(1,n);
    //rev(n,n);
    // numb(n,n);
    //add(n,0);
    //cout << add1(n);
    //cout << fact(n);

    
    // int a[n];
    // for (int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // //Arr(0,4,a);
    // revArr(0,n,a);

    // for (int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
   
     

    return 0;
}