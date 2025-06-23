#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void radix(vector<int>& arr, int exp) {
    int n = arr.size();
    int count[10] = {0};

    // Store count of occurrences
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Change count[i] so that it contains actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    int B[n]; // output array

    // Build the output array (stable sort, process from end)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        B[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the output array to arr[], so that arr now contains sorted numbers according to current digit
    for (int i = 0; i < n; i++) {
        arr[i] = B[i];
    }

    cout << "Array after sorting with exp=" << exp << ":\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

void radixSort(vector<int>& arr) {
    int maxElem = *(max_element(arr.begin(), arr.end()));
    for (int exp = 1; maxElem / exp > 0; exp *= 10) {
        radix(arr, exp);
    }
}

int main() {
    vector<int> arr = {457, 345, 213, 45, 560, 123, 456, 99, 78, 456};
    cout << "Array before sorting:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    radixSort(arr);

    cout << "Final sorted array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
