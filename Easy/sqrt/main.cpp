#include<iostream>
#include<cmath>


class Solution {
public:
    int mySqrt(int x) {
        
      if(x==0 || x==1) return x;

      int left  = 0;
      int right  =x;
      int ans = 0;



      while(left<=right){
      long long mid = left + (right- left) /2;
      long long square = mid * mid;

       if(square == x){
        return mid;
       }else if(square < x){//mid is smaller than the number so check on its right
        ans = mid;
        left = mid+1;
       }else if (square > x){//mid is larger than the number so check on its left 
        right = mid -1;
       }
      }

      return ans;//The ans will be a interger just smaller to than the number 
    }
};

int main(){

  int number = 16;


  Solution sol ;
  int ans = sol.mySqrt(number);
  std::cout << ans << std::endl;

  return 0;




}