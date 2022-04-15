#include<iostream>
    using namespace std;
    
    class array{
        public:
     int totalsize;
     int usedsize;
     int *ptr;              // pointr bcz dma

   };
        void createarray(array *arr,int totalsize,int usedsize){
         arr->totalsize=totalsize;
         arr->usedsize=usedsize;
         arr->ptr = new int [usedsize];
        
     }
     void printarray(array *a){
         for(int i=0;i<a->usedsize;i++){
             cout<<a->ptr[i]<<" ";
         }
         cout<<endl;
     }

     void  setvalues(array * a){
         int x;
         for(int i=0;i<a->usedsize;i++){
             cout<<"enter element at "<<i<<" ";
             cin>>x;
             a->ptr[i]=x;
         }         
     }
    int main(){
     array arr;
     int capacity,size;
     cout<<"enter capacity and size of the array"<<endl;
     cin>>capacity>>size;
     createarray(&arr,capacity,size); //creation of aarray
     setvalues(&arr); // set the values
     printarray(&arr);
return 0;
}
