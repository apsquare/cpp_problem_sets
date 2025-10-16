#include<iostream>
#include<cmath>



// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


//Using the Fibonnaci Series

class Solution {
public:
    int climbStairs(int n) {

         if(n==1 || n==0){
          return 1;
         }
         int prev1 = 1;//For 1 stair
         int prev2  = 1;//For 0 stairs
        int current = 1;
         
         for(int i=2;i<=n;i++){
          current = prev1 + prev2;
          prev2 = prev1;
          prev1 = current;
         }


         return current;
    }
};





int main(){

  Solution sol;
  int stairs = 10;
  int ways  = sol.climbStairs(stairs);
  std::cout << "The number of ways to climb is" << ways << std::endl;
  return 0;

}