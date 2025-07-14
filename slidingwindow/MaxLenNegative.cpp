#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int MaximumSumNeg(vector<int>&arr,int k) {
    unordered_map<int,int> rem;
    int sum = 0;
    int maxLen = -1;
    for (int i =0;i<arr.size();i++) {
        sum+=arr[i];
        if (sum ==  k){
            maxLen = max(maxLen,i+1);
        }
        int resSum = sum - k;
        if (rem.find(resSum) != rem.end()) {
           int pos = rem[resSum];
           maxLen = max(maxLen,pos-i);
        }
        if (rem.find(resSum) == rem.end()) {
            rem[resSum] = i;
        }
    }
    return maxLen;
}

int main () {
    vector<int> arr;
    cout << "Enter the name of element \n";
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int sum;
    cout << "Enter the same\n";
    cin >> sum;
    int res = MaximumSumNeg(arr,sum);
    cout<<"Hence the maxLen of the given subarray is "<<res<<endl;
    return 0;
}