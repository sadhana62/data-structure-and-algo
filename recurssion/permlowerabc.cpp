#include<iostream>
#include<vector>
using namespace std;

void solve2(string i, string o,vector<string>&v){

    if (i.length()==0){
        v.push_back(o);
        return;
    }

    if (isalpha(i[0])){
        string op1 = o;
        string op2 = o;
        op1.push_back(tolower(i[0]));
        op2.push_back(toupper(i[0]));
        i.erase(i.begin()+0);
        solve2(i,op1,v);
        solve2(i,op2,v);
        return;
    } else {
        string op = o;
        op.push_back(i[0]);
        i.erase(i.begin()+0);
        solve2(i,op,v);
        return;
    }

}

void solve(string inp,string op){
    if (inp.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(inp[0]);
    op2.push_back(toupper(inp[0]));
    inp.erase(inp.begin()+0);
    solve(inp,op1);
    solve(inp,op2);
    return;
}

int main(){
    /*
      ab = Ab AB aB ab this is for smaller case letters
    */
    string inp;
    cout<<"Enter the string in small cases\n";
    cin>>inp;
    string op = "";
    solve(inp,op);

    cout<<"\nNow we can take digits or smaller case or upper case letters as well \n";
    /*
      Ab1c  = ab1c Ab1C  AB1c AB1C aB1c ...
    */

    string i;
    cout<<"Enter the string\n";
    cin>>i;
    vector<string>v;
    string o ="";
    solve2(i,o,v);
    cout<<"\n And the required permutation is\n";
    for (auto i:v){
        cout<<i<<" ";
    }
    return 0;
}