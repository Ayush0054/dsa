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
    void insertion (int arr[],int size,int element,int capacity,int index){
        if(size>=capacity){
            cout<<"error";
        }
        else { 

        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index] = element;
        return ;
        }  
    }
    
    int main(){
    int arr[100]={1,2,3,4,5,6};
    int size =6,element,index;
    cout<<"enter element to be inserted"<<endl;
    cin>>element;
    cout<<"enter at which index "<<endl;
    cin>>index;
     insertion(arr,size,element,100,index);
     size = size +1;
      traverse(arr,size);

return 0;
}