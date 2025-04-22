#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void subSetUnique(string inp, string op,vector<string>& s) {
  
    if (inp.length() == 0){
        s.push_back(op);
        return ;
    }
    string op1 = op;
    string op2 =op;
    op2.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    subSetUnique(inp,op1,s);
    subSetUnique(inp,op2,s);


}
int main(){
    cout<<"Enter the string\n";
    string inp;
    cin>>inp;
    string op =" ";
    vector<string> s;
    subSetUnique(inp,op,s);
    set<string> str;
    sort(s.begin(),s.end());//lexiographical order
    for (auto i:s){
        cout<<i<<" ";
        str.emplace(i);
    }
    cout<<"\nUnique sets\n";
    for (auto i:str){
        cout<<i<<" ";
       
    }
  
    
    return 0;

}