#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& v,int temp){
    if(v.size()==0 || v[v.size()-1]<= temp){
        v.push_back(temp);
        return;
    }
    int top = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(top);
    
}

void sort(vector<int>&v){
    if(v.size()==1|| v.size()==0) {
        return;
    }
    int top = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,top);

}

int main(){
//   this program sorting using recurssion

   vector <int> v={4,3,2,6,7,1,3};
   cout<<"Before sorting\n";
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   sort(v);
   cout<<"\nAfter sorting\n";
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   return 0;
}