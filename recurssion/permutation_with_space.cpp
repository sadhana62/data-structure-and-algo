#include<iostream>
using namespace std;

void solve(string inp,string op){
    if (inp.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.append(" ");
    op1.push_back(inp[0]);
    op2.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    solve(inp,op1);
    solve(inp,op2);
    return;
}

int main(){
    string inp;
    cout<<"Enter the string\n";
    cin>>inp;
    string op = "";
    op.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    solve(inp,op);
}