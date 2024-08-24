class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ar[26]={0};
        int sum=0;
        for(int i=0; i<s.size(); i++){
            ar[s[i] - 'a']=i;
        }
        for(int i=0; i<t.size(); i++){
            sum+=abs(ar[t[i]-'a']-i);
        } 
        return sum;
    }

};