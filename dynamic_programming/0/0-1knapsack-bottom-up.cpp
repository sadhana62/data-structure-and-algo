#include<iostream>
#include<vector>
using namespace std;




int knapsack(vector<int>& weights, vector<int>& items, int tot, int W) {
    vector<vector<int>> mat(tot + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= tot; i++) {
        for (int w = 1; w <= W; w++) {
            if (weights[i - 1] <= w) {
                mat[i][w] = max(items[i - 1] + mat[i - 1][w - weights[i - 1]], mat[i - 1][w]);
            } else {
                mat[i][w] = mat[i - 1][w];
            }
        }
    }

    return mat[tot][W];
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