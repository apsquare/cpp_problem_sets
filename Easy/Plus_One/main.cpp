#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
int n = digits.size();

         for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
         }

           digits.insert(digits.begin(),1);
           return digits;

    }
};

int main(){
    Solution sol;
    std::vector<int> arr1 = {9,9,9};
    std::vector<int> arr2 =sol.plusOne(arr1); //Will return {1,0,0,0}
}
