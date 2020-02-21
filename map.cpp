#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,int>m;
    for(int i=0;i<5;i++) 
        m.insert(pair<int,int>(i,i*2));

    for(auto i=m.begin();i!=m.end();i++)
        cout<<i->first<<" "<<i->second<<endl;

    cout<<m.erase(4)<<endl;

    cout<<m.find(3)->second;

    return 0;
}