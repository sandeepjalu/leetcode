class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int ans=0;
        int max=num[0];
        for(int i=1;i<num.size();i++)
        {
            if(num[i]>max)
            {
                max=num[i];
                ans=i;
            }
        }
        //if(num.size()==0)
            //return -1;
        return ans;
    }
};