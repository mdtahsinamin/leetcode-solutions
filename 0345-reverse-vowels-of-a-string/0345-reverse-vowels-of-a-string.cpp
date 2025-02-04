class Solution {
public:
    string reverseVowels(string s) {
        // two pointer method
        // if first element is vowels then swap it
        // aAeEiIoOuU
        int l = 0;
        int r = s.size() - 1;



        while (l < r) {
            if ((s[l] == 'a' || s[l] == 'A' || s[l] == 'e' || s[l] == 'E' ||
                s[l] == 'i' || s[l] == 'I' || s[l] == 'o' || s[l] == 'O' ||
                s[l] == 'u' || s[l] == 'U') && (s[r] == 'a' || s[r] == 'A' || s[r] == 'e' || s[r] == 'E' ||
                s[r] == 'i' || s[r] == 'I' || s[r] == 'o' || s[r] == 'O' ||
                s[r] == 'u' || s[r] == 'U') ) {
                 
                 swap(s[l], s[r]);
                 l++;
                 r--;
            }
            else if( (s[l] == 'a' || s[l] == 'A' || s[l] == 'e' || s[l] == 'E' ||
                s[l] == 'i' || s[l] == 'I' || s[l] == 'o' || s[l] == 'O' ||
                s[l] == 'u' || s[l] == 'U') && !(s[r] == 'a' || s[r] == 'A' || s[r] == 'e' || s[r] == 'E' ||
                s[r] == 'i' || s[r] == 'I' || s[r] == 'o' || s[r] == 'O' ||
                s[r] == 'u' || s[r] == 'U') ){

                    r--;
            }
            else {
                l++;
            }

        }

        return s;
    }
};