class Solution {
public:
    string largestMerge(string word1, string word2) {
        string result = "";
        int i = 0;
        int j = 0;

        while( i < word1.size() && j < word2.size()){
            if(word1[i] > word2[j]){
                result+=word1[i];
                i++;
            }
            else if(word1[i] < word2[j]){
                 result+=word2[j];
                 j++;
            }
            else if (word1.substr(i, word1.size() - i) >= word2.substr(j, word2.size() -j)){
                    result+=word1[i];
                    i++;
            }
            else {
                result+=word2[j];
                j++;
            }
        }

        while(i < word1.size() ){
            result+=word1[i++];
        }

        while(j < word2.size() ){
            result+=word2[j++];
        }

        return result;

    }
};