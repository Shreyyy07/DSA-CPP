                                    // BRUTE FORCE //

// class Solution {
// public:
//     int trap(vector<int>& height) {

//         int n=height.size();
//         int ans=0;
//         for(int i=0; i<n; i++){
//         int lmax=0;
//         int rmax=0;

//         for(int j=0; j<=i; j++){
//                 lmax=max(lmax,height[j]);
//             }
//             for(int j=i; j<n; j++){
//                 rmax=max(rmax,height[j]);
//             }
//             ans+=min(lmax,rmax)-height[i];
//         }
//         return ans;

//     }
// };

class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();
        int ans=0;
        int l=0;
        int r=n-1;
        int lmax=0, rmax=0;

        while(l<r){
             lmax=max(lmax,height[l]);
             rmax=max(rmax,height[r]);

            if(height[l]<height[r]){
             ans+=lmax-height[l];
                l++;
            }
            else{
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};