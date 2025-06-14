#include<iostream>
#include<vector>
using namespace std;


bool check_subsetSum(int sum,vector<int>& arr,int n){
    vector<vector<int>> mat(n + 1, vector<int>(sum + 1, 0));
      for(int i=0;i<=n;i++){
       for (int j=0;j<=sum;j++){
         if (i==0 && j == 0){
            mat[i][j] = true;
         }
         else if (i == 0 && j>0) {
            mat[i][j]= false;
         }
         else if (j==0) {
            mat[i][j]= true;
         }
         else if (arr[i-1]<=j){
            mat[i][j] = (mat[i-1][j-arr[i-1]] || mat[i-1][j]);
         } else{
            mat[i][j] = mat[i-1][j];
         }
       }
    }

    return mat[n][sum];
}

int main() {
    // This program help us to find is there any subarray whose sum can result in the given sum
    vector<int> arr;
    cout<<"Enter the size of array\n";
    int num;
    cin>>num;
    cout<<"Enter the element of array\n";
    for (int  i =0;i<num;i++){
         int ele;
         cin>>ele;
        arr.push_back(ele);
    }
    cout<<"\n Enter the Sum \n";
    int sum;
    cin>>sum;
    bool result= check_subsetSum(sum,arr,num);
    cout<<"Hence the result is "<<result<<"\n";
    
    return 0;
}