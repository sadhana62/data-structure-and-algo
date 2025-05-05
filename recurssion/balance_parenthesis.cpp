#include<bits/stdc++.h>
using namespace std;

void generate_parenthesis(int open,int close, string op, vector<string>&v){

    if (open == 0 && close == 0){
        v.push_back(op);
        v.push_back("&");
        return;
    }
    if(open != 0){
        string op1 = op;
        op1.append("(");
        generate_parenthesis(open-1,close,op1,v);
    }
    if (close>open){
        string op2 = op;
        op2.append(")");
        generate_parenthesis(open,close-1,op2,v);
    }

}

int main(){

   string op = "";
   int num;
   cout<<"Enter the number for brackets\n";
   cin>>num;
   int open = num;
   int close = num;
   vector<string> v;
   generate_parenthesis(open,close,op,v);

   cout<<"\nHence the balanced parenthesis are:\n";

   for(auto i:v){
    cout<<i<<" ";
   }

    return 0;
}