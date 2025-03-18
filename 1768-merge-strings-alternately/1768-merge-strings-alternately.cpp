class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        if(word1.size() >= word2.size()){
            int j = 0;
            int k = 0;

            for(int i = 0; i < (int) word2.size() * 2 ; i++){
                if(i & 1) result+=word2[k++];
                else result+=word1[j++];
            }
            result += word1.substr(j, word1.size()); 
        }

        else {
            int j = 0;
            int k = 0;

            for(int i = 0; i < (int) word1.size() * 2 ; i++){
                if(i & 1) result+=word2[k++];
                else result+=word1[j++];
            }
            result += word2.substr(k, word2.size()); 
        }

        return result;
    }
};