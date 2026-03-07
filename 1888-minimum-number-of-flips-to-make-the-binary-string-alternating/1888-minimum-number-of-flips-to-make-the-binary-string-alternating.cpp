class Solution {
public:
    int minFlips(string s) {
        
        int n = s.size();
        s += s;
        int sz = s.size();

        string s1 = "";
        string s2 = "";

        for(int i = 0; i < s.size(); i++){
            //1010101010
            //0101010101

            if(i % 2){
                s1 += '0';
                s2 += '1';
            }else{
                s1 += '1';
                s2 += '0';
            }
        }

        long long dif1 = 0;
        long long dif2 = 0;

        long long l = 0;
        long long ans = INT_MAX;

        for(long long r = 0; r < s.size(); r++){

            if(s[r] != s1[r]){
                dif1 += 1;
            }
            if(s[r] != s2[r]){
                dif2 += 1;
            }

            if(r - l + 1 > n){
                if(s[l] != s1[l]){
                    dif1 -= 1;
                }
                if(s[l] != s2[l]){
                    dif2 -= 1;
                }
                l++;
            }

            if(r - l + 1 == n){
                ans = min(ans, min(dif1, dif2));
            }
        }

        return ans;
    }
};