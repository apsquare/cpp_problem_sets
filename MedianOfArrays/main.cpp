
#include<iostream>
#include<vector>


class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<double> total;
        int i=0;
        int j=0;
        int m = nums1.size();
        int n = nums2.size();

        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                total.push_back(nums1[i]);
                i++;
            }else{
                total.push_back(nums2[j]);
                j++;
            }
        }



        if(i<m){
            for(int k=i;k<m;k++){
                total.push_back(nums1[k]);
            }
        }else if(j<n){
            for(int k=j;k<n;k++){
                total.push_back(nums2[k]);
            }
        }


        int size = m+n;
        if(size%2==0){
            return (total[size/2 - 1] + total[size/2]) / 2.0;
        }else{
         
             return total[size/2];

        }

    }
};



int main(){
    
    
    std::vector<int> num1 = {1,2};
std::vector<int> num2 = {3,4};
    
    Solution sol;
    
    
    
   double value = sol.findMedianSortedArrays(num1,num2);
    std::cout << value << std::endl;
    
    return 0;
    
}