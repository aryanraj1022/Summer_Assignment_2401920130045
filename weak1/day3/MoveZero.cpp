#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    int i=0,j=n-1;
    while(i<j){
        if(nums[i]==1&&nums[j]==0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        else if(nums[i]!=1){
            i++;
        }
        else if(nums[j]!=0){
            j--;
        }
    }
    for(int ans: nums){
        cout<<ans<<" ";
    }
}