#include <iostream>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n = s.length();

        //Ignoring leading space
        while(i<n && s[i]==' '){
            i++;
        }

        //handling sign
        int sign = 1;
        if(i<n &&  (s[i]=='+' || s[i] == '-')){
            if(s[i] == '-') sign = -1;
            i++;
        }

        //convert digits to integer 
        long result = 0;
        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';
            result = result*10 + digit;
              if (sign * result > INT_MAX) return INT_MAX;
        if (sign * result < INT_MIN) return INT_MIN;

        i++;
        }

         return static_cast<int>(sign * result);
  
    }
};


int main() {
    Solution sol;

    cout << sol.myAtoi("   -42") << endl;          
    cout << sol.myAtoi("4193 with words") << endl;  
  

    return 0;
}
