#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Please enter the size of elements\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max = *max_element(arr,arr+n);
    cout<<"max "<<max;
    int hash[max+1] ={0}; // inside main its 10^6 and globally 10^7
    for(int i=0;i<n;i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }
    cout<<" \nHence the frequencies of elements are \n";
   
    for(int i=0;i<=max;i++){
        if(hash[i] > 0) {
            cout<<i<<" : "<<hash[i];
            cout<<endl;
        }
    }

    unordered_map<int,int>m;
    for(char i=0;i<n;i++){
        m[arr[i]]++;
    }
    for (auto i:m){
        cout<<i.first<<"=>"<<i.second<<" ";
    }
    cout<<"endl";
    return 0;
}