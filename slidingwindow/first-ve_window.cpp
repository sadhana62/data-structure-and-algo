#include <iostream>
#include <vector>
using namespace std;

void firstNegativeElement(vector<int> &arr, int num, int size)
{
    vector<int> temp;
    int start = 0;
    int end = 0;

    while (end < num)
    {
        if (arr[end] < 0)
        {
            temp.push_back(arr[end]);
        }
        if (end - start + 1 < size)
        {

            end++;
        }
        else if ((end - start + 1) == size)
        {
            if (temp.size() == 0)
            {
                cout << "0" << " ";
            }
            else
            { 
                   cout << temp.front()<<" ";
                if (temp.front() == arr[start])
                {
                 
                    temp.erase(temp.begin());
                }
               
            }
            start++;
            end++;
        }
    }
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
    firstNegativeElement(arr, num, size);

    return 0;
}