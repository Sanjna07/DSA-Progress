#include <iostream>
using namespace std;

void print11(int n) {

    /*  1 
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1

    */ 
    int start = 1;
    for (int i = 0; i < n; i++) {
        if(i%2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for (int j = 0;j<=i; j++){
            cout << start ;
            start = 1 - start; // Toggle between 0 and 1
        }
        cout << endl;
    }
}

void print12(int n){

    /*  1      1
        12    21
        123  321      
        12344321
        
    */ 
    for(int i = 1 ; i<=n; i++){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int j = 0; j<2*n-2*i; j++){
            cout << " ";
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        
        cout<< endl;
   }
    
};

void print13(int n){

    /*  1 
        2 3 
        4 5 6        
        7 8 9 10
        11 12 13 14 15
    */ 
   int num = 1;
    for(int i = 1 ; i<=n; i++){
        for (int j = 1; j <=i; j++){
            cout << num << " ";
            num++;
            

        };
        cout<< endl;
   }
    
};

void print14(int n){

    /*  A 
        AB
        ABC
        ABCD            
        ABCDE         
    */ 
    for(int i = 1 ; i<=n; i++){
        for (char ch = 'A'; ch < 'A'+i; ch++){
            cout << ch;
        };
        cout<< endl;
   }
    
};

void print15(int n){

    /*             
        ABCDE
        ABCD
        ABC
        AB  
        A          
    */ 
    for(int i = 0 ; i<=n; i++){
        for (char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout << ch;
        };
        cout<< endl;
   }
    
};

void print16(int n){

    /*  A 
        BB
        CCC
        DDDD
        EEEEE
    */ 
    for(int i = 0 ; i<n; i++){
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++){
            cout << ch;
        };
        cout<< endl;
   }
    
};
void print17(int n){
  /*
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
  */
 for(int i = 0; i<n; i++){

    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }

    char ch = 'A';
    int midpoint = (2*i+1)/2;
    for(int j=1 ;j<=2*i+1;j++){
        cout<<ch;
        if (j<=midpoint)ch++;
        else ch--;
    }

    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
 }
};

void print18(int n){

    /*  E
        DE
        CDE
        BCDE
        ABCDE
    */ 
    for(int i = 0 ; i<n; i++){
        for(char ch = 'E'-i; ch <= 'E'; ch++){
            cout << ch<<" ";
        };
        cout<< endl;
   }
    
};

void print19(int n){

    /*  * * * * * * * * * *
        * * * *     * * * * 
        * * *         * * *
        * *             * * 
        *                 *
        *                 *
        * *             * * 
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * * 
    */
    
    for(int i = 0; i< n ; i++){
        for(int j = 0; j < n-i; j++){
            cout << "* ";
        }

        for(int j = 0; j < 2*i; j++){
            cout << "  ";
        }
         for(int j = 0; j < n-i; j++){
            cout << "* ";
    
        }
        cout << endl;   
    }

    for(int i = 0; i< n ; i++){
        for(int j = 0; j < i+1; j++){
        cout << "* ";
        }
        for(int j = 0; j< 2*(n-i-1);j++){
            cout << "  ";
        }

        for(int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
};

void print20(int n){

    /*  *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */ 
   int spaces = 2*n-2;
   for(int i=1 ; i<=2*n-1; i++){
        int stars = i;
    if(i>n)stars = 2*n - i;    
    for (int j = 1; j <=stars; j++){
        cout << "*";
    };

    for(int j = 1; j<=spaces;j++){
        cout << " ";
    }

    for (int j = 1; j <=stars; j++){
        cout << "*";
    };
    cout<< endl;
    if(i<n)spaces -=2;
    else spaces +=2;
   }
    
};

void print21(int n){
    /*  
       ****
       *  *
       *  *
       ****
    */
   for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if (i ==0|| i == n-1 || j == 0 || j == n-1){
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}
}

void print22(int n){
    /*  
       4444444
       4333334
       4322234
       4321234
       4322234
       4333334
       4444444
    */
   for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout << n - min(min(top, left), min(right, bottom));
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n; 

    print22(n);
}