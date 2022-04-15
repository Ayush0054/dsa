#include<bits/stdc++.h>
    using namespace std;
      void traverse(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

 void bubbleSort(int arr[], int n){   
for(int i=1;i<n;i++){
	//for round 1 to n-1
   bool swapped = false;
	for(int j=0;j<n-i;j++){
        //process element till n-i th index
		if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
		}
	}
    if(swapped == false){
        break;
    }
}
}

    int main(){
    int arr[7]={8, 22, 7, 9, 31, 5, 13};
    bubbleSort(arr,7);
    traverse(arr,7);
return 0;
}