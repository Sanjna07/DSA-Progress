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
int armstrong(int n){
    int dup = n;
    int sum = 0;
    int cnt = (int)(log10(n)) + 1;
    while (n>0){
        int last_digit = n% 10;
        n = n/10;
        sum = sum + pow(last_digit, cnt);
    }
    return dup == sum;
}

int printdivisors(int n){
    for (int i = 1; i<= n; i++){
        if (n%i == 0) cout<<i<<" ";
    }
}

int printdivisors2(int n){
    vector<int> v;
    for (int i = 1; i*i <= n; i++){
        if (n%i == 0){
            v.push_back(i);
            if ((n/i) != i){ 
                v.push_back(n/i);
            }
        }
    }   
    sort(v.begin(), v.end());
    for (auto it : v) cout<<it<<" "; 
}

bool isPrime(int n){
    int cnt = 0;
    if (n == 1) return false;
    for (int i = 1; i <= n; i++){
        if (n%i == 0) 
            cnt++;
        }
        if (cnt == 2) return true;  
        else return false;
    }


int gcdcalc(int a, int b){
    int gcd = 1;
    for (int i = 1; i <= min(a,b); i++){
        if (a%i == 0 && b%i == 0)
         gcd = i;
    }
    return gcd;
}   

int gcdcalc2(int a, int b){
    int gcd = 1;
    for(int i = min(a,b); i >= 1; i--){
        if (a%i == 0 && b%i == 0)
        gcd = i;
        return gcd;
        break;
    }
}

int main(){
    //int n;
    //cin>>n;
    int a, b;
    cin>>a>>b;
    cout<<gcdcalc2(a,b);
    return 0;
}