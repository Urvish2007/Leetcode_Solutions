class Solution {
public:
    using ll = long long;

    int minOperations(string s) {
        
        int n = s.size();

        // even odd position k khel

       ll cnt1=0,cnt2=0;

       for(int i=0;i<s.size();i++){
           
           char c1 = (i%2==0)?'0':'1';
           char c2 = (i%2==0)?'1':'0';

           if(c1!=s[i]){
            cnt1++;
           }

           if(c2!=s[i]){
            cnt2++;
           }

       }

       return min(cnt1,cnt2);
    }
};