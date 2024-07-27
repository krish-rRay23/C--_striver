#include<bits/stdc++.h>
using namespace std;

//      pairs
void pairExplain(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
   
    //pair<int,pair<int,int>> p={1,{2,3}};
   // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
   
    pair<int,int> arr[] = {{1,2},{3,4},{4,5}};
    cout<<arr[1].second;
}

//      vectors
void vectorExplain(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int,int>> v;
    v.push_back({1,3});
    v.emplace_back({3,5});

    vector<int> v(5);
    vector<int> v1(5,100);
    vector<int> v2(v1);

    //access vector using ==>
    cout<<v[0];                                  //OR ITERATOR
    vector<int>::iterator it=v.begin();         //v.begin acesses memory location but to access element use *
    cout<<*(it);

    vector<int>::iterator it = v.begin();
    vector<int>::iterator it = v.rbegin();
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();

    for(vector<int>::iterator it=v.begin() ; v.begin() != v.end() ; it++){
        cout<<*(it)<<" ";
    }
    for(auto it : v){          // auto automatically allots datatype to vector
        cout<<*(int it)<<" ";
    }

    //erase 
    v.erase(start,end);
    v.erase(v.begin()+2,v.begin()+4);  // {1,2,3,4,5,6} -->  {1,2,5,6}

    //insert
    v.insert(location,start,end);
    vector<int> v(3,5)    ;  //{5,5,5}
    vector<int> p(2,9)     ; //{9,9}
    v.insert(v.begin+2,p.begin(),p.end()); //{5,5,9,9,5}

    v.pop_back();  //pops out last element
    v.size();      //gives size of vector
    v.clear();     //erases vector
    v.swap(v1,v2); // v1={1,2} | v2={3,4}
                   // v1={3,4} | v2={1,2}
    v.empty();     //gives 1 if vector empty else 0
}     

//      list
void listExplain(){
    list<int> ls;
    //all functions same as vector 
    ls.push_front(5);
    ls.emplace_front(2);
    //listts are lot more cheaper than vectors

    }

//      DeQue
void DequeExplain(){
    deque<int> dq;
    //all functions same as list 
}

//      Stack
void stackExplain(){         // LIFO
    stack<int> st;
    //Last In First Out
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}

    st.top();       //prints top element --> 5
    st.pop();       //deletes top element {4,3,2,1}
    st.size();      //4
    stack<int> st1,st2;
    st1.swap(st2);
}

//      Queue       
void QueueExplain(){        // FIFO  
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.back()+=5; //{1,2,8}
    q.pop();     //{2,8}
    q.front();   //2
    
}

//      Priority Queue     // highest/lowest on top
void PriorityQueueexplain(){
    //largest on top
    priority_queue<int> pq;
    pq.push(2);
    pq.push(8);
    pq.push(6);
    pq.push(10);    // 10,8,6,2
    cout<<pq.top(); // 10
    pq.pop();       // 8,6,2

    //smallest on top
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(2);
    pq.push(8);
    pq.push(6);
    pq.push(10);    // 2,6,8,10
    cout<<pq.top(); // 2
    pq.pop();       // 6,8,10
}

//      Set
void SetExplain(){        // sorted order and unique

    set<int> st;
    st.insert(1);       // 1
    st.insert(2);       // 1,2
    st.insert(2);       // 1,2
    st.insert(4);       // 1,2,4
    st.insert(3);       // 1,2,3,4

    // {1,2,3,4,5}
    auto it = st.find(3);  //returns iterator of 3
    st.erase(it); 
    auto it = st.find(6);  //returns iterator of st.end();
    st.erase(5);           //erases 5 {1,2,3,4}
    int cnt= st.count(1);  //returns either 0 if it doesnt exists or 1 if exists

    // {1,2,3,4,5}
    auto it1= st.find(2);
    auto it2= st.find(4);
    st.erase(it1,it2);

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(4);
}

//      Multi Set
void multiSetExplain(){   // sorted only
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10); // {10,10,10}
    ms.erase(10);   // all 10 erased
    ms.erase(ms.find(10));  //only 1 10 erased
    ms.erase(ms.find(10),ms.find(10)+2);
}

//      Unordered Set
void UnorderedSetExplain(){   // unique only    
    //rest same
}

//      Map
void MapExplain(){      // unique key for a value
    map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,<int>> mpp;
    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp.[{2,3}]=10;

    for(auto it : mpp){
        cout<<it.first()<<it.second();
    } 
    }

//      MultiMap
void MultiMapExplain(){
    //multiple key for a value
}

//      Unordered Map
void unorderedmapExplain(){
    
}