class Solution {
public:
    using ll = long long;

    bool checkOnesSegment(string s) {
        if(s.size()==1){
            return true;
        }

        ll cnt = 0;
        ll cn = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                cn++;
            }else{
                if(cn > 0){
                    cnt++;
                }
                cn = 0;
            }
        }

        if(cn > 0){
            cnt++;
        }

        return cnt == 1;
    }
};