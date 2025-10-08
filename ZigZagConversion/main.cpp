class Solution {
public:
    string convert(string s, int numRows) {


if(numRows==1 || numRows>=s.length()){
    return s;
}




        int passed = 0;
        bool goingDown = true;
        int rowNumber =1;
         vector<string> strings (numRows);

        while(passed<s.length()){

       if(goingDown){
        strings.at(rowNumber-1).push_back(s[passed]);
        passed++;
        if(rowNumber==numRows){
            goingDown = !goingDown;
            rowNumber--;
        }else{
            rowNumber++;
        }
       }else if (!goingDown){
        strings.at(rowNumber-1).push_back(s[passed]);
        passed++;
        if(rowNumber==1){
            goingDown = !goingDown;
            rowNumber++;
        }else{
            rowNumber--;
        }
       }
       }
          string total;
       for(int i=0;i<numRows;i++){
        total += strings[i];
       }

       return total;
        }

    };
