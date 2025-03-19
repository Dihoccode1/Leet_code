class Solution {
public:
    int climbStairs(int n) {
           int step =0;
    if(n==1)
    {
        step=1;
    }
    else if(n==2)
    {
        step=2;
    }
    else 
    {
       int prev_step = 2;
       int prev_prev_step = 1;
       for(int i=3;i<=n;i++)
       {
           step = prev_step + prev_prev_step;
           prev_prev_step = prev_step;
           prev_step = step;
       }
    }
    return step; 
    }
};
