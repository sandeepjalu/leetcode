#define MIN(a, b) ( (a)<(b) ? (a) : (b) )



int binSearch(vector<int> &num, int begin, int end,int min)
{
    
    if((end-begin)==0)
        return MIN(num[begin],min);
    else if((end-begin)==1)
        return MIN( MIN(num[begin], num[end]), min);
    else
    {
        int mid = (begin+end)/2;
        int a,b,c;
        a=num[begin];
        b=num[mid];
        c= num[end];
        int t = MIN( MIN( num[begin], num[end] ), b);
        if(min>t)
            min=t;
        
        
        /*if(b>num[mid+1] || b<num[mid-1])
            return binSearch(num,mid+1,end,min);
        else if(b<num[mid+1] || b>num[mid-1])
            return binSearch(num,begin,mid-1,min);
        else*/
            return MIN(binSearch(num,begin,mid-1,min),binSearch(num,mid+1,end,min));
    }
}

class Solution {
public:
    int findMin(vector<int> &num) {
        int n=num.size();
        int x=-1;
        if(n>0)
        {
            int min = num[0];
            x=binSearch(num,0,n-1,min);
        }
        return x;
    }
};