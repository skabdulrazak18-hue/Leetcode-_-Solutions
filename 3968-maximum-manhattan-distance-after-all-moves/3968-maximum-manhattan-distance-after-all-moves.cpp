class Solution {
public:
    int maxDistance(string moves) {
        int u = 0, d = 0, l = 0, r = 0, wild = 0;

        for(char ch : moves) {
            if(ch == 'U') u++;
            else if(ch == 'D') d++;
            else if(ch == 'L') l++;
            else if(ch == 'R') r++;
            else wild++;
        }

        int base = abs(r - l) + abs(u - d);

        return base + wild;
    }
};