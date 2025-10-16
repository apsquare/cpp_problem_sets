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
};



int main(){
  Solution sol;
  auto ans = sol.generate(5);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      std::cout << ans[i][j]  << " ";
    }
    std::cout << std::endl;
  }
}



