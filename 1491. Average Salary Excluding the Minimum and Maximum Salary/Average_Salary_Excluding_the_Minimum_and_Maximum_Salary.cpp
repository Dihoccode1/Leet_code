class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        int count=0;
        for(int i=1;i<salary.size()-1;i++)
            {
                sum+=salary[i];
                count++;
            }
        return (1.00*sum)/count;
    }
};
