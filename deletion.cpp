#include<bits/stdc++.h>
    using namespace std;
    // traverse function
    void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletion (int arr[],int size,int index){

        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        } 
    }
    
    int main(){
    int arr[100]={1,2,3,4,5,6};
    int size =6,index;
     cout<<"enter index to be deleted "<<endl;
     cin>>index;
     deletion(arr,size,index);
     size = size -1;
      traverse(arr,size);
    
return 0;
}