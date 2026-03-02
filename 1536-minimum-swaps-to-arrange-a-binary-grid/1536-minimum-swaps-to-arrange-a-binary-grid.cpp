class Solution {
public:
    using ll = long long;

    int minSwaps(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<int> need(n);

        for(int i = 0; i < n; i++){
            ll cnt = 0;
            for(int j = n-1; j >= 0; j--){
                if(grid[i][j] == 0) cnt++;
                else break;
            }
            need[i] = cnt;
        }

        ll op = 0;
        ll idx = 0;

        while(idx < n){

            ll nd = n - 1 - idx;

            if(need[idx] >= nd){
                idx++;
                continue;
            }

            ll i = idx + 1;
            while(i < n && need[i] < nd){
                i++;
            }

            if(i == n) return -1;

            while(i > idx){
                swap(need[i], need[i-1]);
                op++;
                i--;
            }

            idx++;
        }

        return op;
    }
};