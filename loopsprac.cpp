#include<iostream>
    using namespace std;
    int looping(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    int main(){
    int arr[5]={1,2,3,4,5};
return 0;
}