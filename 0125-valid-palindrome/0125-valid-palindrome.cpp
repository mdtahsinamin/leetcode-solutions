class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); // lowercase
        string str = "";
        string qtr;
        for (int i = 0; i < s.size(); i++) { // @, #, $, &
            if (s[i] == ' ' || s[i] == ',' || s[i] == ':' || s[i] == '.' ||
                s[i] == '@' || s[i] == '$' || s[i] == '#' || s[i] == '&' ||
                s[i] == '!' || s[i] == '_' || s[i] == '-' || s[i] == '%' ||
                s[i] == '+' || s[i] == '=' || s[i] == '\\' || s[i] == '{' ||
                s[i] == '}' || s[i] == '[' || s[i] == ']' || s[i] == '"' ||
                s[i] == '\'' || s[i] == '?' || s[i] == ';' || s[i] == '(' ||
                s[i] == ')' || s[i] == '`') {
                continue;
            } else {
                str += s[i];
            }
        }
        qtr = str;
        cout << qtr << endl;

        reverse(qtr.begin(), qtr.end());

        return (qtr == str);
    }
};