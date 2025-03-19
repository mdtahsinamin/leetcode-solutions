class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;

        for(auto move : moves){
            if(move == 'L') x--;
            else if(move == 'R') x++;
            else if(move == 'U') y++;
            else y--; 
        }

        if(x == 0 && y == 0) return true;
        
        return false;
    }
};