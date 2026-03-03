class Solution {
public:
    void iv(string&s){
        // convert all 0->1 and 1->0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                s[i]='0';
            }else{
                s[i]='1';
            }
        }
    }
    char findKthBit(int n, int k) {
        // ok need to just do simple looping and all

        // we are using previous output to generate future output;

        string s="0";

        string ans=s;

        for(int i=2;i<=n;i++){
            string n2=s;
            iv(n2);
            reverse(n2.begin(),n2.end());
            string n1= s + "1" + n2;
            ans=n1;
            s=n1;
        }

        // reverse(ans.begin(),ans.end());
        
        // cout<<ans<<endl;
        
        return ans[k-1];
    }
};