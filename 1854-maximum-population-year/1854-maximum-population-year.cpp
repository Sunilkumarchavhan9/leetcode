class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>alv(2051,0);
        for(int i=0; i<logs.size(); i++){
            int birth=logs[i][0],death=logs[i][1];
            
            alv[birth] +=1;
            alv[death] -= 1;
        }
        int mx=0, year=-1;
        int currsum=0;
        for(int i=1950; i<=2050; i++){
            currsum+=alv[i];
            if(currsum > mx){
                mx=currsum;
                year=i;
            }
        }
        return year;
    }
    
};