#include<iostream>
    using namespace std;
    bool search(int arr[], int size, int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                return 1;

            }
        }
        return 0;
    }
    int main(){
    int arr[10]={1,4,13,51,43,22,32,9,6,45};
    int key;
    cout<<"enter no to be searched in array"<<endl;
    cin>>key;
   bool found= search(arr,10,key);
   if(found){
       cout<<"key is present"<<endl;
   }
   else{
       cout<<"key is not there"<<endl;
   }

return 0;
}