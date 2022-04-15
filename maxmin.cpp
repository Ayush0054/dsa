#include<bits/stdc++.h>
    using namespace std;
    int max(int arr[],int size){
        int maxi = INT_MIN;
        for(int i=0;i<size;i++){
         if( arr[i]>maxi){
         maxi = arr[i];
         }
        }

        return maxi;
    }
        int min(int arr[],int size){
        int mini = INT_MAX;
        for(int i=0;i<size;i++){
        if(arr[i]<mini){
         mini = arr[i];
        }
        }
        return mini;
    }
    int main(){
    int arr[5]={1,2,5,14,15};
    cout<< max(arr,5)<<endl;
    cout<< min(arr,5)<<endl;
return 0;
}