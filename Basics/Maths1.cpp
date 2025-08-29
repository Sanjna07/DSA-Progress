#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int counter = 0;
    while(n>0){
        counter++;
        n = n / 10;
    }
    return counter;
}

int count2(int n){
    int cnt = (int)(log10(n)) + 1;
    return cnt;
}

int reverse(int n){
    int rev = 0;
    while (n>0){
        int last_digit = n% 10;
        n = n/10;
        rev = rev*10 + last_digit;
    }
}

bool isPalindrome(int n){
    if (n < 0) return false;
    int rev = 0;
    int dup = 0;
    while (n < 0){
        int last_digit = n% 10;
        n = n/10;
        rev = rev*10 + last_digit;
    }
    return dup == rev;
}


int main(){
    int n;
    cin>>n;
    cout<<isPalindrome(n);
    return 0;
}