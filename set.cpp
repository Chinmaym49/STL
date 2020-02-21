#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    set<int,greater<int>>s;
    s.insert(1);                                // insert
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    
    for(auto i=s.begin();i!=s.end();i++)        // print
        cout<<*i<<" ";
    cout<<endl;

    vector<int>v={1,2,2,3,3,4};
    set<int>x(v.begin(),v.end());               // remove duplicates

    for(auto i=x.begin();i!=x.end();i++)        // print
        cout<<*i<<" ";
    cout<<endl;

    cout<<s.erase(2)<<"\n";                     // remove by value

    cout<<*s.find(4);

    return 0;
}