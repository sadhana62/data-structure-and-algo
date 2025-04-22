#include<iostream>
#include<vector>
using namespace std;

int partion(int i, int j, vector<int>&v){
    int  p = v[j];
    int t = i-1;
    for (int s = i; s<j;s++){
        if (v[s]<p){
            t++;
            swap(v[s],v[t]);
        }
       
    }
    swap(v[t+1],v[j]);
    return t+1;
   

}

void quickSort(int i,int j, vector<int>&v){
    if (i<j) {
        int m = partion(i,j,v);
        quickSort(i,m-1,v);
        quickSort(m+1,j,v);
    }
 

}

int main() {
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
    quickSort(0, n - 1, v);
    cout << "\n Elements after sorting\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
}