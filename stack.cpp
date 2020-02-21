#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int>s;

    for(int i=1;i<5;i++)                // push    
        s.push(i);

    cout<<s.size()<<endl;               // size
    cout<<s.top()<<endl;                // top

    stack<int>t=s; 
    while(!t.empty()) {                 // print     
        cout<<t.top()<<" ";
        t.pop();
    }
    cout<<endl;

    s.pop();                            // pop

    stack<int>tt=s;
    while(!tt.empty()) {                // print
        cout<<tt.top()<<" ";
        tt.pop();
    }
    cout<<endl;

    return 0;
}