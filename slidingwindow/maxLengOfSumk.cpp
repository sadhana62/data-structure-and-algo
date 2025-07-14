#include<iostream>
#include<vector>
using namespace std;

int MaximumSumPos(vector<int>&arr,int k) {
    int sum = 0;
    int maxLen = 0;
    int start = 0, end =0;
    while (end < arr.size()) {
        sum+= arr[end];
        if (sum < k) {
            end++;
        } else if (sum == k ){
            maxLen = max(maxLen,(end-start+1));
            end++;
        } else {
            sum -= arr[start];
            start++;
            end++;
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
    int res = MaximumSumPos(arr,sum);
    cout<<"Hence the maxLen of the given subarray is "<<res<<endl;
    return 0;
}