#include <iostream>
#include <vector>
using namespace std;

void merging(int i, int mid, int j, vector<int> &v)
{
    int k = 0;
    int s = i;
    int m = mid + 1;
    int e = j;
    vector<int> temp;
    while (s <= mid && m <= j)
    {
        if (v[s] >= v[m])
        {
            temp.push_back(v[m]);
            m++;
        }
        else
        {
            temp.push_back(v[s]);
            s++;
        }
    }
    while (s <= mid)
    {
        temp.push_back(v[s]);
        s++;
    }
    while (m <= j)
    {
        temp.push_back(v[m]);
        m++;
    }
    for (int k = 0; k < temp.size(); k++)
    {
        v[i + k] = temp[k];
    }
    return;
}
void merge(int i, int j, vector<int> &v)
{
    if (i >= j)
    {
        return;
    }
    int mid = (i + j) / 2;
    merge(i, mid, v);
    merge(mid + 1, j, v);
    merging(i, mid, j, v);
}

int main()
{
    vector<int> v;
    cout << "\nEnter the lenght of elements\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "\n Elements before sorting\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    merge(0, n - 1, v);
    cout << "\n Elements after sorting\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
}