#include<iostream>
#include<algorithm>
using namespace std;

int minimunPlatForm(int n ,int arr[],int dep[]) {
    sort(arr,arr+n);
    sort(dep,dep+n);
    int c = 0;
    int maxC = 0;
    int i =0; int j = 0;
    while(i<n && j<n) {
        if (arr[i] <= dep[j]){
            c++;
            i++;
        } else {
            c--;
            j++;
        }
        maxC = max(maxC,c);
    }
    return maxC;

}

int main() {

    int arr[] = {900, 945, 955, 1100, 1500, 1800};
    int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = minimunPlatForm(n,arr,dep);
    cout<<"\nHence the mininum number of the platform required is "<<result<<endl;

    return 0;
}