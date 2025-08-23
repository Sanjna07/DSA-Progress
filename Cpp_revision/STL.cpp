#include<bits/stdc++.h>
using namespace std;

//function 
void print(){
    cout<<"Hello, World!";
}
int sum(int a, int b){
    return a+b;
}

//pairs
void example_pair(){
    pair<int, int> p1 = {1, 2};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<int,int>> p = {1, {2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout<<arr[1].second<<endl;
    
}

//vectors
void example_vector(){
    //declare
    vector<int> v; 
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    vector<pair<int,int>>vp;
    vp.push_back({1,2});
    vp.emplace_back(3,4);

    vector<int> v2(5,100); 
    vector<int> vc(5); 
    vector<int> v3(5,20); 
    vector<int> v4(v3); 

    //iterate
    vector<int>::iterator it = v.begin();
    it++;// pehle + hoga means 1st index pe chala jayega
    cout<<*(it)<<" ";
    it++;// agar assa hota to pehle 0th index pe chala jata

    it = it + 2;
    cout<<*(it)<<" ";

    cout<< v[0]<<" "<<v.at(0)<<" ";
    cout<<v.back()<<endl;

    //print vector

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it : v){   
        cout<<it<<" ";
    }
    cout<<endl;

    //delete

    v.erase(v.begin()+1); // 1st index pe jo element hoga wo delete ho jayega
    for(auto it : v){   
        cout<<it<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+2, v.begin()+4); // 1st index se lekar 4th index tak jo element hoga wo delete ho jayega
    for(auto it : v){   
        cout<<it<<" ";
    }
    cout<<endl;

    //insert
    vector<int> v5(2,100);
    v5.insert(v5.begin(), 300); // 0th index pe 300 dal dega
    v5.insert(v5.begin()+1,2,10); // 1st index pe 2 baar 10 dal dega
    
    vector<int> copy(2,50);
    v5.insert(v5.begin(),copy.begin(),copy.end()); // copy vector ke saare element v5 me dal dega
    
    
    
    for(auto it : v5){   
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v5.size()<<endl;
    v.pop_back(); // last element delete kar dega
    v5.swap(v); // v5 ke saare element v me chala jayega aur v ke saare element v5 me chala jayega
    //v5.clear(); // saare element delete kar dega
    cout<<v2.empty()<<endl; // agar vector empty hoga to 1 return karega nahi to 0

    for(auto it : v){   
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : v5){   
        cout<<it<<" ";
    }
    cout<<endl;
    
}

//list
void example_list(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(6);

    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;

    ls.erase(ls.begin());
    cout<<ls.size()<<endl;

    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;

    ls.remove(4); // value remove karega
    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;

    //rest is like vectors
}

//stack

void example_stack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl; // last me jo element dala hoga wo print karega
    st.pop(); // last me jo element dala hoga wo delete kar dega
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl; // agar stack empty hoga to 1 return karega nahi to 0
}

//queue
void example_queue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.back()+=5; // last me jo element dala hoga usme 5 add kar dega
    cout<<q.back()<<endl;

    cout<<q.front()<<endl; // first me jo element dala hoga wo print karega
    q.pop(); // first me jo element dala hoga wo delete kar dega
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl; // agar queue empty hoga to 1 return karega nahi to 0

}

//priority_queue
void example_priority_queue(){
    //max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);

    cout<<pq.top()<<endl; // sabse bada element print karega
    pq.pop(); // sabse bada element delete kar dega
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl; // agar priority_queue empty hoga to 1 return karega nahi to 0

    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5);
    minheap.push(2);
    minheap.push(8);
    minheap.push(1);
    cout<<minheap.top()<<endl; // sabse chhota element print karega
    minheap.pop(); // sabse chhota element delete kar dega
    cout<<minheap.top()<<endl;
    cout<<minheap.size()<<endl;
    cout<<minheap.empty()<<endl; // agar priority_queue empty hoga to 1 return karega nahi to 0

}

int main(){

    //print(); 
    //int s = sum(2,3);
    //cout<<"\nSum is: "<<s<<endl;


    //example_pair();
    //example_vector();
    //example_stack();
    //example_queue();
    example_priority_queue();

    return 0;
}