class Solution {
public:
int product_digits(int n)
{
    int product=1;
    while(n>0)
    {
        int x=n%10;
        product*=x;
        n/=10;
    }
    return product;
}
int sum_digits(int n)
{
    int sum=0;
    while(n>0)
    {
        int x=n%10;
        sum+=x;
        n/=10;
    }
    return sum;
}
    int subtractProductAndSum(int n) {
       return product_digits(n)-sum_digits(n); 
    }
};
