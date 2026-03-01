class Solution {
public:
    int minPartitions(string n) {
        
        int max_digit =0;

        for(char c:n){
          
          int x = c-'0';

          max_digit = max(max_digit,x);
        }

        return max_digit;
    }
};