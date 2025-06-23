#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    int B[n];
    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    int c[max+1]={0};
    cout<<endl;
     for (int i=0;i<=max;i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++) {
        c[arr[i]] = c[arr[i]] + 1;
    
       
    }
    cout<<endl;
    for (int i=0;i<=max;i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    int j =0;
    for (int i = 0;i<n;) {
       while(c[j]>0){
         B[i] = j;
         i++;
         c[j] = c[j]-1;
       }
       j++;
    }
    cout<<"After sorting\n";
     for (int i=0;i<n;i++){
          cout<<B[i]<<" ";
    }
}

int main(){
    int n; 
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Now enter the elements of the arrays\n";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting\n";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    countSort(arr,n);
    return 0;

}