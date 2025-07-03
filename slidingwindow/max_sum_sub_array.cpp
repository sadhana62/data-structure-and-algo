#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int>& arr,int num,int size) {
    int maxSum = 0;
    int start = 0;
    int end = 0;
    int sum =0 ;
    while(end< num) {
         sum+= arr[end];
       if (end-start+1 < size) {
           
            end++;
       }
       else if ((end-start+1) == size) {
           maxSum = max(maxSum,sum);
           sum = sum - arr[start];
           start++;
           end++;
       }
    
    }
    return maxSum;
}
int main() {
    vector<int> arr;
    cout<<"Enter the name of element \n";
    int num;
    cin>>num;
    for (int i =0;i<num;i++) {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int size;
    cout<<"Enter the window size\n";
    cin>>size;
    int res = maxSumSubarray(arr,num,size);
    cout<<"\n Hence the maximum sum is "<<res;

    return 0;
}