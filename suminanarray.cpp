#include<iostream>
    using namespace std;
    void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int sum(int arr[], int size){
        int sum =0;
        for (int i = 0; i < size; i++)
        {
            sum= sum + arr[i];
        }
        return sum;
    }

    int main(){
    
    int arr[5]={1,2,3,4,5};
    traverse(arr,5);
    cout<< sum(arr,5)<< endl;;
return 0;
}