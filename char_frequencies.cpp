#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Please the string\n";
    string s;
    cin>>s;

    int hash[26] ={0}; // inside main its 10^6 and globally 10^7
    for(char i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    cout<<" \nHence the frequencies of elements are \n";
   
    for(int i=0;i<=5;i++){
        char c;
        cin>>c;
        cout<<c<<" : "<<hash[c-'a'];
        cout<<endl;
        
    }
    // we can use unordered map  for best time complexity
    unordered_map<char,int>m;
    for(char i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for (auto i:m){
        cout<<i.first<<"=>"<<i.second;
    }
    cout<<"endl";

    // for(int i=0;i<=5;i++){
    //     char c;
    //     cin>>c;
    //     cout<<c<<" : "<<m[c];
    //     cout<<endl;
        
    // }

    return 0;
}