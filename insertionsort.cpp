#include<bits/stdc++.h>
    using namespace std;
     void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
void insertionsort(int arr[] ,int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j =i-1;
        for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }

        }
        arr[j+1]=temp;
    }
}
    int main(){
    int arr[6]={40,2,5,1,24,10};

    insertionsort(arr,6);
    traverse(arr,6);
return 0;
}