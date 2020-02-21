#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>v;                           // declare

    for(int i=2;i<20;i+=3)                  // append
        v.push_back(i);

    for(auto i=v.begin();i!=v.end();i++)    // print
        cout<<*i<<" ";
    cout<<endl;

    cout<<v.size()<<endl;                   // size
    cout<<v.empty()<<endl;                  // check if empty

    for(auto i=v.rbegin();i!=v.rend();i++)  // print
        cout<<*i<<" ";
    cout<<endl;

    vector<int>w=v;                         // = operator
    reverse(w.begin(),w.end());             // reverse

    for(int i=0;i<w.size();i++)             // print
        cout<<w.at(i)<<" ";
    cout<<endl;

    cout<<v.front()<<" "<<w.back()<<endl;   // first and last

    v.erase(v.begin()+2);                   // remove at 2
    v.insert(v.begin()+2,4);                // insert at 2
    v.pop_back();                           // remove last

    for(int i=0;i<v.size();i++)             // print
        cout<<v[i]<<" ";
    cout<<endl;

    w.clear();                              // clear
    w.assign(10,0);                         // init with 0 of size 10

    for(auto i=w.begin();i!=w.end();i++)    // print
        cout<<*i<<" ";
    cout<<endl;

    auto i=find(v.begin(),v.end(),5);       // get index
    if(i!=v.end())
        cout<<i-v.begin()<<endl;

    return 0;
}