class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      
        int res=-1;
        int sum=0;
        int flag=0;
        int s1=0;
        int s2=0;
        for(int i=0;i<gas.size();i++)
        {
            s1+=gas[i];
            s2+=cost[i];
        }
        if(s1-s2<0)
        {
            return -1;
        }
        for(int i=0;i<gas.size();i++)
        {
            if(res==i)
            {
                if(flag==0)
                    return -1;
                return res;
            }
            
            if(gas[i]-cost[i]>=0 && flag==0)
            {
                res=i;
                sum+=gas[i]-cost[i];
                flag=1;             
            }
              else if (flag==1)
              {
                  sum+=gas[i]-cost[i];
              }
            if(sum<0)
            {
                sum=0;
                flag=0;
            }
            if(sum>=0 && i==gas.size()-1)
            {
                i=-1;
            }        
            
        }
        return -1;
    }
};