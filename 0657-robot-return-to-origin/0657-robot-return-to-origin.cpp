class Solution {
public:
    bool judgeCircle(string moves) {
    int X = 0, Y = 0;
    for (char i : moves){
        switch (i){
            case 'U':
                Y++;
                break;
            case 'D':
                Y--;
                break;
            case 'L':
                X++;
                break;
            case 'R':
                X--;
                break;
        }
    }
    return X == 0 && Y == 0;
}
};