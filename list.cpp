#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main() {
    list<int>l;
    for(int i=1;i<=5;i++)                           // append
        l.push_back(i);
    for(int i=1;i<=5;i++)                           // addbeg
        l.push_front(i+5);
    
    for(auto i=l.begin();i!=l.end();i++)            // print
        cout<<*i<<" ";
    cout<<endl;

    cout<<l.size()<<endl;                           // size

    l.sort();                                       // sort inbuilt
    l.reverse();                                    // rev inbuilt

    for(auto i=l.begin();i!=l.end();i++)            // print
        cout<<*i<<" ";
    cout<<endl;

    cout<<l.front()<<" "<<l.back()<<endl;           // first and last
    cout<<l.empty()<<endl;                          // check if empty

    l.pop_front();                                  // remove first
    l.pop_back();                                   // remove last

    for(auto i=l.begin();i!=l.end();i++)            // print
        cout<<*i<<" ";
    cout<<endl;

    l.remove(9);                                    // remove 9
    list<int>::iterator i=l.begin();                
    i++;                                            // points to index 1
    l.insert(i,20);                                 // insert at index
    auto it=l.begin();
    it++;       
    it++;                                           // points at index 2
    l.erase(i);                                     // remove from index 2                                

    for(auto i=l.begin();i!=l.end();i++)            // print
        cout<<*i<<" ";
    cout<<endl;

    return 0;
}