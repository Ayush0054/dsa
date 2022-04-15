#include<iostream>
    using namespace std;
        void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void swapalternate(int arr[], int size){
     for(int i=0;i<size;i=i+2){
        //  if(i+1<size){
         swap(arr[i],arr[i+1]);
        //  }
     }
        }
    
    int main(){
    int arr[6]={3,4,5,6,7,8};
    swapalternate(arr,6);
    traverse(arr,6);

return 0;
}