class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            char c=tasks[i];
            freq[c-'A']++;
        }
        sort(freq.begin(),freq.end());
        int mostfreq=freq[25]-1;
        int idletime=mostfreq*n;
        for(int i=24;i>=0;i--)
        {
            idletime-=min(mostfreq,freq[i]);
            if(idletime<0)
            {
                return tasks.size();
            }
        }
        return idletime+tasks.size();
    
    
        
    }
};
