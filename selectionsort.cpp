#include<bits/stdc++.h>
    using namespace std;
        void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void selection(int arr[],int n){
        for(int i=0;i<n;i++){
            int minindex=i;
            for(int j=i+1;j<n;j++){
                if(arr[minindex]>arr[j])
                minindex=j;
            }
            swap(arr[minindex],arr[i]);
            
        }
    }
    int main(){
    int arr[6]={4,5,1,9,2,3};
    selection(arr,6);
    traverse(arr,6);
return 0;
}