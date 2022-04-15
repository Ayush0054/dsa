#include<iostream>
    using namespace std;
    void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
void sort012(int arr[] , int n)

{

    int low=0;

    int mid=0;

    int high=n-1;

 

    while(mid<=high)

    {

        if(arr[mid]==0 && mid<=high)

        {

            swap(arr[mid] ,arr[low]);

            mid++;

            low++;
            

        }

        if(arr[mid]==1 && mid<=high)

        {

            mid++;

        }

        if(arr[mid]==2 && mid<=high)

        {

            swap(arr[mid] ,arr[high]);

            high--;
            

        }

    }

}
    int main(){
    int arr[6]={0,1,2,2,1,0};
    sort012(arr,6);
    traverse(arr,6);
return 0;
}