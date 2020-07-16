class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        {
            return 1;
        }
        double t= myPow(x,n/2);
        if(n%2==0)
        {
        return t*t;
        }
        else
        {
            return n<0 ?  1/x*t*t:x*t*t;
        }
    }
};
