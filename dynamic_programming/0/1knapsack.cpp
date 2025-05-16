#include<iostream>
#include<vector>
using namespace std;

int knapsack(vector<int>&weights, vector<int>&items, int tot, int W){
    if (tot == 0 || W == 0){
       return 0;
    }
    if (weights[tot-1] <= W){
        return max(items[tot-1] + knapsack(weights, items, tot-1, W - weights[tot-1]),knapsack(weights, items, tot-1, W));
    }
    else {
      return  knapsack(weights, items, tot-1, W);
    }
}

int main(){

    vector<int> weights;
    int totNumItem;
    cout<<"Enter the number of items\n";
    cin>> totNumItem;
    vector<int> items;
    cout<<"Enter the weights as well as its value\n";
    for(int i =0;i<totNumItem;i++){
        int wt,it;
        cin>>wt;
        cin>>it;
        weights.push_back(wt);
        items.push_back(it);
    }
    cout<<"Enter the maximum capacity of bag\n";
    int W;
    cin>>W;
    int profit = knapsack(weights,items,totNumItem,W);
     for(int i =0;i<totNumItem;i++){
       cout<<"W "<<weights[i]<<" "<<"I "<<items[i];
       cout<<endl;
    }
    cout<<"Hence the profit is "<<profit<<endl;
    return 0;
}