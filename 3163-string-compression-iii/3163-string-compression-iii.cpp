class Solution {
public:
    string compressedString(string word) {
        string ret="";
        char c=word[0];
        int cnt=1;
        for(int i=1;i<word.size();i++){
            if(word[i]==c && cnt<9)
                cnt++;
            else{
                ret+=(to_string(cnt)+c);
                c=word[i];
                cnt=1;
            }
        }
        ret+=(to_string(cnt)+c);
        return ret;
    }
};
