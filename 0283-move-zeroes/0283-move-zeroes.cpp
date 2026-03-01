class Solution {
public:
    void moveZeroes(vector<int>& arr) {
         // code here
        // Brute force : TC: o(nlogn) : Sort array in reverse order SC : o(1)
        // Naive approach : count no of zeros :o(n)
        // and then after this move all relative non-zero number to front of array while maintaining
        // its order o(n)
        // overwrite the array  TC: o(1)
        // we may use Extraspace array if needed ! o(n)
        // so these are my three approaches for an array moves zeros to end
        
        
        int idx = 0;
        
        int no_of_zeros = count(arr.begin(),arr.end(),0);
        
        int limit = arr.size() - no_of_zeros;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]!=0){
                arr[idx]=arr[i];
                idx++;
            }
        }
        
        for(int j=idx;j<arr.size();j++){
            arr[j]=0;
        }
        
    }
};