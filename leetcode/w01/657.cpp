class Solution {
public:
    bool judgeCircle(string& moves) {
        int x = 0, y = 0;
        int size = moves.size();
        for (size_t m = 0; m < size; m++) {
            switch (moves[m]) {
                case 'U': y++; break;
                case 'D': y--; break;
                case 'L': x--; break;
                case 'R': x++; break;
            }                        
        }
        return !x && !y;
    }
};
