#include<bits/stdc++.h>
using namespace std;


void insert(stack<int> &s, int top) {
    if (s.empty()|| s.top()<=top) {
        s.push(top);
        return ;
    }
    int ele = s.top();
    s.pop();
    insert(s,top);
    s.push(ele);
}

void sort_stack(stack<int> &s){
    if (s.size() == 1 || s.size() == 0){
        return ;
    }
    int top = s.top();
    s.pop();
    sort_stack(s);
    insert(s,top);
}

int main(){
    stack<int>s;
    s.push(11);
    s.emplace(2);
    s.push(4);
    s.push(8); //8,4,2,1
    cout<<"\n";
    sort_stack(s); // 1,2,4,8
    while(!s.empty()) {
        int ele = s.top();
        s.pop();
        cout<<ele<<" ";
    }
    return 0;
}