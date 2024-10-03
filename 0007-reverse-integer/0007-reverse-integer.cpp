class Solution {
public:
    int reverse(int x) {
        int multi = x>0?1:-1;
        long n = (long)x*multi;
        long rev=0;
        int lastDigit=0;
        while(n>0)
        {
            lastDigit = n%10;
            n/=10;
            if((rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7)) && multi==1) {
                return 0; 
            }
            if ((rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 8))&& multi==-1){
                return 0; 
            }
            rev = rev*10+lastDigit;
        
        
        }
        return (int)multi*rev;
    }
};