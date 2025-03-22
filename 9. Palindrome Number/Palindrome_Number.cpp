class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp=x;
        long sum=0;
        while(x>0)
        {
            int n=x%10;
            sum=sum*10+n;
            x/=10;
        }
    if(sum!=temp)
    {
        return false;
    }
return true;
    }
};
