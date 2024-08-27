class Solution {
public:
    string makeGood(string s) {
     int n=s.length();
        int flag=true;
        while(flag){
            int j=0;
            n=s.length();
            flag=false;
            for(int i=0; i<n; i++ ){
                if(i+1 < n && abs(s[i]-s[i+1]) == 32){
                    flag=true;
                    i++;
                }else{
                    s[j] = s[i];
                    j++;
                }
            }
            s=s.substr(0 , j);
        }
        return s;
    }
};
//To solve the problem without using a stack  we can use a two-pointer technique or simply modify the //string in place while iterating over it The idea is to iterate through the string check for adjacent //bad pairs and remove them until the string becomes  good 