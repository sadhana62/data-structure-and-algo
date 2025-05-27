#include<iostream>
#include<vector>
using namespace std;

// Define the memoization table as a global variable
vector<vector<int>> mem;



int knapsack(vector<int>&weights, vector<int>&items, int tot, int W){
    // Memoization table should not be re-initialized on every call; move it outside the function for correct memoization.
    if (tot == 0 || W == 0){
       return 0;
    }
    if (weights[tot-1] <= W){
        if (mem[tot][tot] != -1){
            return mem[tot-1][tot-1];
        } else {

            return mem[tot-1][tot-1] = max(items[tot-1] + knapsack(weights, items, tot-1, W - weights[tot-1]),knapsack(weights, items, tot-1, W));
        }
    }
    else {
         if (mem[tot][tot] != -1){
            return mem[tot-1][tot-1];
        }else {
            return mem[tot-1][tot-1]= knapsack(weights, items, tot-1, W);

        }
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

    // Initialize memoization table with -1
    mem.assign(totNumItem+1, vector<int>(W+1, -1));
   
    int profit = knapsack(weights,items,totNumItem,W);
     for(int i =0;i<totNumItem;i++){
       cout<<"W "<<weights[i]<<" "<<"I "<<items[i];
       cout<<endl;
    }
    cout<<"Hence the profit is "<<profit<<endl;
    return 0;
}