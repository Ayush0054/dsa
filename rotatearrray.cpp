#include<bits/stdc++.h>
#include<vector>    
    using namespace std;
    
    void rotate(vector <int>& arr)
{    int ans = arr[arr.size()- 1];
      arr.pop_back();
    arr.insert(arr.begin(), ans);
    cout<<arr<<endl;
}
    int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr);
return 0;
}