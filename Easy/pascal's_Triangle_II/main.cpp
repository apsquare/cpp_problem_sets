#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Given an integer numRows, return the first numRows of Pascal's triangle.

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

      vector<vector<int>> final;
      vector<int> current;
      vector<int> prev;

        for(int i=0;i<numRows;i++){//Looping the given number of rows 
          current.resize(i+1,1);

          if(i+1<=2){//If the number of rows is 1,2 no changes required
            final.push_back(current);
            prev = current;
            continue;
          }
          for(int j=1;j<i;j++){
            current[j] = prev[j] + prev[j-1];  
          }
            final.push_back(current);
            prev =current;
    }
    return final ;
  }

    vector<int> getRow(int rowIndex) {
           vector<vector<int>> requiredArray = generate(rowIndex+1);//Row indexing starts from 0 but the row number starts from 1
           vector<int> row = requiredArray.back();
           return row;
    }
};



int main(){

  Solution sol;
   vector<int> ans = sol.getRow(3);

   for(int i=0;i<ans.size();i++){
    std::cout << ans[i] << " " ;
   }

   std::cout << std::endl;
   
}



