#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp;
                    temp.push_back((arr[i], arr[j], arr[k]));
                    //temp.push_back(max(arr[i], arr[j], arr[k]));
                    ans.push_back(temp);
                }
            }
        }
    }
    //     sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int s;
    cin >> s;
    vector<int> arr{1, 2, 3, 4, 5};
    findTriplets(arr, 5, s);
    return 0;
}