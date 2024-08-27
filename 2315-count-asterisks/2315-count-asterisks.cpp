class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int flag=false;
        
        for(char c:s){
            if(c == '|'){
                flag =!flag;
            }else if(c == '*' && !flag){
                count++;
            }
        }
        return count;
    }
};