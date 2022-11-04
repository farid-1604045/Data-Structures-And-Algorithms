#include<bits/stdc++.h>
using namespace std;

// Pairs
//void explainPair()
//{
//    pair<int,int>p={1,3};//1,3
//    cout<<p.first<<' '<<p.second<<endl;
//
//    pair<int,pair<int,int>>p1={1,{2,3}};//1,2,3
//    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
//
//    pair<int,int>arr[]={{1,2},{3,4},{5,6}}; //2,4,6
//
//    int n = sizeof(arr)/sizeof(arr[0]);
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i].second<<" ";
//    }
//    cout<<endl;
//}

// Vectors
//void explainVector()
//{
//    /*vector<int>v;
//    v.push_back(1);
//    v.emplace_back(2); //emplace back is faster than push_back;
//
//    cout<<v[0]<<" "<<v[1]<<endl;
//
//    vector<pair<int,int>>vec;
//    vec.push_back({1,2});
//    vec.emplace_back(3,4); //for emplace back no need to curly braces
//    cout<<vec[1].first<<" "<<vec[1].second<<endl; //3,4
//
//    vector<int>v1(5,100); // {100,100,100,100,100}
//
//    vector<int>v2(5); // take 5 spaces with garbage value
//
//    vector<int>v3(5,20);
//    vector<int>v4(v3); //copy of v3 but different container
//    */
//
//    vector<int>v={10,20,12,23};
//
////    vector<int>::iterator it = v.begin(); //it represents address
////    it++;
////    cout<<*it<<" ";
////    it = it + 2; //4th address which is 4
////    cout<<*it<<" ";
//
////    vector<int>::iterator it = v.end(); // it points after last elements location
////    vector<int>::iterator it = v.rend(); // it points before first elements location
////    vector<int>::iterator it = v.rbegin(); // it points last elements location
//
//    cout<<v.back()<<endl; // print last element;
//
////    vector<int>::iterator it;
////    for(it = v.begin(); it!=v.end(); it++)
////    {
////        cout<<*it<<" ";
////    }
//
////    for(auto it = v.begin(); it!=v.end(); it++)
////    {
////        cout<<*it<< " ";
////    }
//
//    for(auto it: v) //auto assign automatic datatype
//    {
//        cout<<it<<" ";
//    }
//
//    //{10,20,12,23}
//    v.erase(v.begin()+1); //it deletes 20
//
//    //{10,20,12,23,35}
//    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} {start,end}
//
//    vector,int>v(2,100); //{100,100}
//    v.insert(v.begin(),300); //{300,100,100}
//    v.insert(v.begin()+1, 2, 10); //{300,10,10,100,100}
//
//    vector<int>v1(2,50); //{50,50};
//    v.insert(v.begin(), v1.begin(), v1.end()); //{50,50,300,10,10,100,100}
//
//    //{10,20}
//    cout<<v.size(); // 2
//
//    v.pop_back()// {10}
//
//    // v2 -> {10,20}
//    // v3 -> {30,40}
//
//    v1.swap(v2); v2->{30,40}, v3->{10,20};
//    v.clear(); //erase the entire vector
//
//    cout<<v.empty(); //print true or false based on empty or non empty vector
//
//}

//void explainList()
//{
//    list<int>ls;
//    ls.push_back(2); //{2}
//    ls.emplace_back(4); //{2,4}
//
//    ls.push_front(5); //{5,2,4}
//    ls.emplace_front(6); //{6,5,2,4}
//
//    //push_front is much faster than insert operation
//
//    for(auto it: ls)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//}

//void explainDeque()
//{
//    deque<int>dq;
//    dq.push_back(1); //{1}
//    dq.emplace_back(2); //{1,2}
//    dq.push_front(4); //{4,1,2}
//    dq.emplace_back(3); //{3,4,1,2}
//
//    dq.pop_back(); //{3,4,1}
//    dq.pop_front(); //{4,1}
//    dq.back();
//    dq.front();
//
//    //rest same as vector
//}

//void explainStack()
//{
//    //LIFo
//    stack<int>st;
//    st.push(1); //{1}
//    st.push(2); //{2,1}
//    st.emplace(5); //{5,2,1}
//
//    cout<<st.top(); //print 5
//    st.pop(); //{2,1}
//
//    stack<int>st1,st2;
//    st1.swap(st2);
//}

//void explainQueue
//{
//    queue<int>q;
//    q.push(1); //{1}
//    q.push(2); //{1,2};
//    q.emplace(4); //{1,2,4}
//
//    q.back()+=5;
//    cout<<q.back(); //print 9
//
//    // Q is {1,2,9}
//    cout<<q.front(); //print 1
//
//    q.pop(); //{2,9}
//
//    cout<<q.front(); //print 2
//
//}

//void explainPQ()
//{
//    priority_queue<int>pq;
//
//    pq.push(5); //{5}
//    pq.push(2); //{5,2}
//    pq.push(8); //{8,5,2}
//    pq.emplace(10); //{10,8,5,2}
//
//    cout<<pq.top(); // prints 10
//
//    pq.pop(); //{8,5,2}
//
//    priority_queue<int, vector<int>,greater<int>>pq;
//    pq.push(5); //{5}
//    pq.push(2); //{2,5}
//    pq.push(8); //{2,5,8};
//}

//void explainSet()
//{
//    set<int>st;
//    st.insert(1); //{1}
//    st.insert(2); //{1,2}
//    st.emplace(2); //{1,2}
//    st.insert(4); //{1,2,4}
//    st.insert(7); //{1,2,3,4}
//
//    {1,2,3,4,5}
//    auto it = st.find(3); //returns a pointer which points value 3
//
//    auto it = st.find(6); //returns set.end() means after last value
//
//    st.erase(5) //erase 5 and it takes logarithmic time
//
//    int cnt = st.count(1); //returns 0 or 1
//
//    auto it = st.find(3);
//    st.erase(it); //it takes constant time
//
//    //{1,2,3,4,5}
//    auto it1 = st.find(2);
//    auto it2 = st.find(4);
//    st.erase(it1,it2); //{1,4,5}
//
//    lower bound and upper_bound is set
//
//    auto it = st.lower_bound(5);
//    cout<<*it<<endl;
//    auto it1 = st.upper_bound(5);
//    cout<<*it1<<endl;
//}

//void explainMultiSet()
//{
//    multiset<int>ms;
//    ms.insert(1); //{1}
//    ms.insert(1); //{1,1}
//    ms.insert(2);
//    ms.insert(3);
//
////    ms.erase(1); //all 1's erased
////    cout<<ms.empty()<<endl;
//
//    //int cnt = ms.count(1); //2
//    //cout<<cnt<<endl;
//
//    ms.erase(ms.find(1)); // Just erase 1st elements
//    for(auto it: ms)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    //ms.erase(ms.find(1),ms.find(1)+2); from 1 to till 1+2
//}

//void explainMap()
//{
//    map<int,int>mp; //key,value
//
//    mp.insert({1,2});
//    mp.insert({1,4}); // first insert get priority
//    mp[2] = 3;
//    //mp.emplace(2,4);
//    for(auto it: mp)
//    {
//        cout<<it.second<<" "; // 2,3
//    }
//    //map<int, pair<int,int>>mp;
//    //map<pair<int,int>, int>mp; //mp[{2,3}] = 10;
//
//    auto it = mp.find(2);
//    cout<<*it.second; // 3
//
//}
//
//void explainMultiMap()
//{
//    // everything same as map, only it can store multiple keys
//}
//
//void explainUnorderedMap()
//{
//    //same as set and unordered_set difference
//}

bool comp(pair<int,int>p1, pair<int,int>p2)
{
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    //if they are same
    else
    {
        if(p1.first>p2.first)return true;
        else
        {
            return false;
        }
    }
}
void explainExtra()
{
//    sort(a, a+n);
//    sort(v.begin(),v.end());
//    sort(a+2,a+4);
//    sort(a,a+n, greater<int>);
//
    pair<int,int>a[]={{1,2},{2,1},{4,1}};

    int n = sizeof(a)/sizeof(a[0]);
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a,a+n,comp); // {4,1},{2,1},{1,2} comp->self comperator

    for(auto it: a)
    {
        cout<<it.first<< " "<<it.second<<" ";
    }
    cout<<endl;

    int num = 7;
    int cnt = __builtin_popcount(num); // 3 111

    long long num = 163333333;
    int cnt = __builtin_popcountll();

    string s = "123";
    do{
        cout<<s<<endl;//123, 132, 213, 231, 312, 321
        //but is it is 231 then next are; 312, 321
    }
    while(next_permutation(s.begin(),s.end()));


    //{1,10,5,6}
    int maxi = *max_element(a,a+n);//10

}
int main()
{
    //explainPair();
    //explainVector();
    //explainList();
    //explainDeque();
    //explainStack();
    //explainQueue();
    //explainPQ();
    //explainSet();
    //explainMultiSet();
    //explainMap();

    //Algorithms

    explainExtra();

    return 0;
}
