
#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle);

        if(index==std::string::npos){
            return -1;
        }else{
            return index;
        }
    }
};


int main(){
 string  haystack = "sadbutsad";
 string needle = "sad";

 Solution sol;

int index = sol.strStr(haystack,needle);

if(index==-1){
  std::cout << "The substring does not exist" << std::endl;
}else{
  std::cout << "The first index of occurance is at index : " << index << std::endl;
}

return 0;



}