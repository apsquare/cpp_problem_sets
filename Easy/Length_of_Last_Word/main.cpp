#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

     while (!s.empty() && s.back() == ' ') {
    s.pop_back();
          }

    std::string lastWord;
       size_t index = s.find_last_of(' ');

       if( index!= std::string::npos){
        lastWord = s.substr(index+1);
       }else{
        lastWord = s.substr(0);
       }

       return lastWord.length();

        
    }
};


int main(){
    Solution sol ;
    int lastWordLength = sol.lengthOfLastWord("Hello World ");
    std::cout << lastWordLength << std::endl;
}