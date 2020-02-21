#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int>q;

    for(int i=0;i<5;i++)                        // enqueue
        q.push(i);

    cout<<q.front()<<" "<<q.back()<<endl;       // first and last
    cout<<q.size()<<"\n";                       // size
    queue<int>t=q;

    while(!t.empty()) {                         // print
        cout<<t.front()<<" ";
        t.pop();
    }
    cout<<endl;

    q.pop();                                    // pop
    while(!q.empty()) {                         // print
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}