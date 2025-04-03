class Solution {
public:
    int addDigits(int num) {
           int sum=0;
    if(num<10)
    {
        sum=num;
    }
    else
    {
        int temp=num;
        while (temp>0)
        {
            int x=temp%10;
            sum+=x;
            temp/=10;
        }
        num=addDigits(sum);
    }
    return num;
    }
};
