#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketSort(float arr[],int n){
  vector<vector<float>> B(n);
  for (int i = 0; i < n; i++) {
    int bi = n * arr[i]; // Index in bucket
    if (bi == n) bi = n - 1; // Handle edge case when arr[i] == 1
    B[bi].push_back(arr[i]);
  }
  for (int i = 0; i < n; i++) {
    sort(B[i].begin(), B[i].end());
  }
  int index = 0;
  for (int i = 0; i < n; i++) {
    for (size_t j = 0; j < B[i].size(); j++) {
      arr[index++] = B[i][j];
    }
  }
  // Print the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
    float arr[8] = {0.43,0.33,0.65,0.45,0.23,0.33,0.679,0.2};
    bucketSort(arr,8);
    return 0;

}