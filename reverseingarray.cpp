#include<bits/stdc++.h>
    using namespace std;
    void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
        void reversearray(int arr[], int n) {
          int start =0;
          int end = n-1;
          while(start<=end){
              swap(arr[start],arr[end]);
              start++;
              end--;
          }
        }
    
    int main(){
        int test;
        cin>>test;
        while(test--){
        int n;
        cin>>n;
       int arr[n];
      
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
      reversearray(arr,n);
       traverse(arr,n);
        }
return 0;
}