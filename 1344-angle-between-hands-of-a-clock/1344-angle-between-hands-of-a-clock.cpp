class Solution {
public:
    double angleClock(int hour, int minutes) {
        double time=abs((60*hour)-(11*minutes))/2.0;
        if(time>180) return 360-time;
        return time;
    }
};