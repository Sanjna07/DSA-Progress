#include <iostream>
using namespace std;

void print1(int n){

    /*  * * * *
        * * * * 
        * * * * 
        * * * * 
    */ 
    for ( int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout<<"* ";
        };
        cout<<endl;
    };

};

void print2(int n){

    /*  * 
        * * 
        * * * 
        * * * * 
    */ 
   for(int i =0 ; i<n; i++){
    for (int j = 0; j <=i; j++){
        cout << "* ";

    };
    cout<< endl;
   }
    
};

void print3(int n){

    /*  1 
        1 2 
        1 2 3        
        1 2 3 4
        1 2 3 4 5
    */ 
    for(int i = 1 ; i<=n; i++){
        for (int j = 1; j <=i; j++){
            cout << j <<" ";

        };
        cout<< endl;
   }
    
};

void print4(int n){

    /*  1 
        2 2 
        3 3 3        
        4 4 4 4
        5 5 5 5 5
    */ 
    for(int i = 1 ; i<=n; i++){
        for (int j = 1; j <=i; j++){
            cout << i <<" ";

        };
        cout<< endl;
   }
    
};

void print5(int n){

    /*  * * * * *
        * * * *
        * * * 
        * * 
        * 

    */ 
    for(int i = 1 ; i<=n; i++){
        for (int j = 0 ; j < n-i+1; j++){
            cout <<"* ";

        };
        cout<< endl;
   }
    
};

void print6(int n){

    /*  1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1 

    */ 
    for(int i = 1 ; i<=n; i++){
        for (int j = 1 ; j <= n-i+1; j++){
            cout << j;

        };
        cout<< endl;
   }
    
};


void print7(int n){

    /*         * 
             * * * 
           * * * * * 
         * * * * * * * 
       * * * * * * * * *
    */ 
   for(int i = 0 ; i<n; i++){
    for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for (int j = 0 ; j < 2*i+1; j++){
            cout << "*";
            }
            for (int j = 0; j < n-i-1; j++){
                cout << " "; 
                }
        cout<< endl;
    }
    
};

void print8(int n){

    /*         
       * * * * * * * * *
         * * * * * * * 
           * * * * *
             * * * 
               *      
    */ 
   for(int i = 0 ; i<n; i++){
    for(int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0 ; j < 2*n-(2*i+1); j++){
            cout << "*";
            }
            for (int j = 0; j < i; j++){
                cout << " "; 
                }
        cout<< endl;
    }
    
};

/* pattern 9
               * 
             * * * 
           * * * * * 
         * * * * * * * 
       * * * * * * * * *
       * * * * * * * * *
         * * * * * * *  
           * * * * * 
             * * *  
               *      
    */

void print10(int n){

    /*  * 
        ** 
        *** 
        ****
        *****
        ****
        ***
        **
        * 
    */ 
   for(int i=1 ; i<=2*n-1; i++){
        int stars = i;
    if(i>n)stars = 2*n - i;    
    for (int j = 1; j <=stars; j++){
        cout << "*";

    };
    cout<< endl;
   }
    
};

int main(){
    // for test cases
    /*int t;
    cin >> t;
    for (int i = 0; i<t; i++){
        int n ;
        cin >> n;
        print1(n);
    }*/
    int n ;
        cin >> n;
        /*pattern 9
        print7(n);
        print8(n);*/
        
        print10(n);


};
