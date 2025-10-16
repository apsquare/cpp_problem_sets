#include<iostream>
#include<cmath>
#include<vector>
#include<set>


using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      int i=0;//TO iterate over nums1
      int j=0;//To iterate over nums2
      int k=0;//To iterate over the final vector


      std::vector<int> final ; 



      while(i<m && j<n){

        if(nums1[i]<nums2[j]){
          final.push_back(nums1[i]);
          i++;
        }else if (nums2[j]<nums1[i]){
          final.push_back(nums2[j]);
          j++;
        }else{
          final.push_back(nums2[j]);
          final.push_back(nums1[i]);
          i++,j++;
        }
      }

         //Fill the remaining element from the vector that has some elements left
          if(i<m){
            for(int l=i;l<m;l++){
              final.push_back(nums1[l]);
            }
          }

          if(j<n){
            for(int l=j;l<n;l++){
              final.push_back(nums2[l]);
            }
          }

      nums1.clear();
      nums1.insert(nums1.begin(),final.begin(),final.end());         
    }
};



int main(){
 
  std::vector<int> nums1 = {1,2,3,0,0,0};
  std::vector<int> nums2 = {2,5,6};

  Solution sol ;
  sol.merge(nums1,3,nums2,3);

  for(auto val : nums1){
    std::cout << val << " ";
  }

  std::cout << std::endl;


}


