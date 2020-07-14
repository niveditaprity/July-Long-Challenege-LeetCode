class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
          if(i<=n)
          {
              count++;
              n=n-i;
          }
           else if(i>n)
            {
                break;
            }
        }
        return count;
        
    }
};
