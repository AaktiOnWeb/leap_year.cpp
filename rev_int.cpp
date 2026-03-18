class Solution {
public:
    int reverse(int x) {
        int rem;
        long long rev=0;
        while(x!=0){
           rem=x%10;
           x=x/10;
           if(rev>INT_MAX/10||rev<INT_MIN/10)
           return 0;
           else
           rev=rev*10+rem;
        }
        return rev;
        

        
        
    }
};
