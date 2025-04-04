class Solution {
public:
    double myPow(double x, int n) {
          if(n>0)
  {
    return pow(x,n);
  }
  else if(n<0)
  {
    return 1.00/pow(x,-1ll*n);
  }
  return 1.00000;
    }
};
