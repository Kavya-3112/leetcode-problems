class Solution 
{
public:
    vector<int> countBits(int n) 
    {
        vector<int> v(n+1,0);
        int offset=1;
        for(int i=1;i<=n;i++)
        {
            if(offset*2==i)
            {
                offset*=2;
            }
            v[i]=v[i-offset]+1;
        }
        return v;
    }
};
