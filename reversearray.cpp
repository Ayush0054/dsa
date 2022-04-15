#include<iostream>
    using namespace std;
        void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void reverse(int arr[], int size){
        int start=0;
        int end=size-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    int main(){
    int arr[5]={3,4,5,6,7};
    reverse(arr,5);
    traverse(arr,5);

return 0;
}