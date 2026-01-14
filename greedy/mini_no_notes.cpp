#include<iostream>
#include<vector>
using namespace std;

vector<int> getMiniNoNotes(int value) {
    vector<int> v = {1,2,5,10,50,100,500,1000};
    vector<int> res;
    for (int i = v.size()-1;i>=0;i--){
        while(v[i]<=value){
           value-=v[i];
           res.push_back(v[i]);
        }
    }
    return res;
}

int main() {
    cout<<"Greedy program to find minimum number of notes required to get the value\n";
    cout<<"Enter the value\n";
    int value;
    cin>>value;
    vector<int> r = getMiniNoNotes(value);
    for (auto ele : r){
      cout<<ele<<" ";
    }

}