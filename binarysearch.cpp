#include<iostream>
    using namespace std;
    int binarysearch(int arr[],int size, int key){
        int start =0;
        int end= size -1;
        int mid= start + (end-start)/2 ;
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            if(key > arr[mid]){
                start = mid + 1;         //go to right wAla
            }
            else{
                end = mid -1;            // left wala  
            }
            mid= start + (end-start)/2;       // spaqce complexity
        }
        return -1;
    }
    int main(){
    int arr[6]={5,7,8,9,10,13};
    int key;
    cout<<"enter key"<<endl;
    cin>> key;
    int bns = binarysearch(arr,6,key);
    cout<<"index of key is "<< bns <<endl;
return 0;
}