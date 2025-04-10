#include <iostream>
#include <stack>
using namespace std;

void deletemid(stack<int>&s,int mid) {
    if(mid == 1) {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deletemid(s,mid-1);
    s.push(temp);

}

int main(){

    //   this program delete middle element of stack using recurssion
    stack<int> s;
    int n;
    for(int i=0;i<7;i++){
        cin>>n;
        s.push(n);
    }
    int middleTerm = s.size()/2 + 1;

    if(!s.empty()) {
        deletemid(s,middleTerm);
    }
    cout<<"\n";

    while(!s.empty()) {
        int ele = s.top();
        s.pop();
        cout<<ele<<" ";
    }
    
    return 0;
}