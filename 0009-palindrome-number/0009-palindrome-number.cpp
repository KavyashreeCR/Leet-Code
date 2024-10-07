class Solution {
public:
    bool isPalindrome(int x) 
    {
       if(x<0){return 0;}
        int rev=0;
        int c=x;
        int lastdigit;
        while(x!=0)
        {
            lastdigit=x%10;
           
             if(rev>INT_MAX/10||(rev==INT_MAX/10 && lastdigit>7)){
                return 0;}
             rev=rev*10+lastdigit;
                 
              x=x/10;
        };
       
            return rev==c;
        }
};
