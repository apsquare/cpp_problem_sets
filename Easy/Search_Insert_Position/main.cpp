#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchVec(vector<int>& nums, int target, int left, int right){
        if(left > right){
            return left; 
        }

        int mid = (left + right) / 2;

        if(nums[mid] == target){
            return mid;
        } 
        else if(nums[mid] > target){
            return searchVec(nums, target, left, mid - 1); // Correct indices
        } 
        else{
            return searchVec(nums, target, mid + 1, right); // Correct indices
        }
    }

    int searchInsert(vector<int>& nums, int target) {
        return searchVec(nums, target, 0, nums.size() - 1);
    }
};



int main(){

  vector<int> arr = {1,3,5,6};
  int target = 4;
  Solution sol;

  int result = sol.searchVec(arr,target,0,arr.size());
  std::cout << result << std::endl;
 

}