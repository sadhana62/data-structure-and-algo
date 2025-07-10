#include <iostream>
#include <vector>
using namespace std;

vector<int> maxFromEachSubArray(vector<int> &arr, int num, int size)
{
    vector<int> temp;
    int start = 0;
    int end = 0;
 

    while (end < num)
    {
       
        if (end - start + 1 < size)
        {

            end++;
        }
        else if ((end - start + 1) == size)
        {
            int maxVal =  arr[start];
            for (int  i = start;i<=end;i++) {
                maxVal = max(maxVal,arr[i]);
            }
            temp.push_back(maxVal);
            start++;
            end++;
        }
    }
    return temp;
}
int main()
{
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
    int size;
    cout << "Enter the window size\n";
    cin >> size;
    vector<int> res = maxFromEachSubArray(arr, num, size);
    for(auto ele: res) {
        cout <<ele<<" ";
    }

    return 0;
}