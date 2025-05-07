#include<iostream>
using namespace std;

void solve(int z,int o,int t,string op){
    if (t == 0){
        cout<<op<<" ";
        return;
    } 
    string op1 = op;
    op1.append("1");
    solve(z,o+1,t-1,op1);
    if (o>z){
        string op2 = op;
        op2.append("0");
        solve(z+1,o,t-1,op2);
    }
}

int main() {

   cout<<"Enter the number\n";
   int inp;
   cin>>inp;
   int t = inp;
   int zeros_c = 0;
   int ones_c = 0;
   string op;
   solve(zeros_c,ones_c,t,op);
   return 0;


}