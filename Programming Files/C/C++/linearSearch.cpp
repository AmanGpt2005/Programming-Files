#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& nums, int target) {
    int n=nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target=5;
    int result=linearSearch(nums,target);
    if (result != -1){
        cout<<"Element found at index: "<<result;
    }else{
        cout<<"Element not found";
    }
}