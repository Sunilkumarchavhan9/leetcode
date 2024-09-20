class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>even;
        int temp=0, ans=0;
        
        for(int i=0; i<n; i++){
            if(nums[i]%2==0) temp++;
            else{
                even.push_back(temp);
                temp=0;
            }
        }
        even.push_back(temp);
        int m=even.size();
        for(int i=0; i<m-k; i++){
            ans+=(even[i]+1)*(even[i+k]+1);
        }
        return ans;
    }
};



//Consider the window with k prime numbers, the number of evens on either side
 //are variables, Maintain evens on left and right of every odd numbers, 
 //ans is sum of (evens on left of first number + 1 * evens on right of last number + 1).
 //Store the evens on left of every number in a vector and evens on the right of last element in last.
 //Slide a window of size k , add (even[i]+1 * even[i+k]+1 ) to the sum.
