class Solution {
public:
    int trap(vector<int>& height) {
       int res=0;
      int n=height.size();
        int lmax[n],rmax[n];
     lmax[0]=height[0];
            for(int j=1;j<n-1;j++){
                lmax[j]=max(lmax[j-1],height[j]);
            }
             rmax[n-1]=height[n-1];
            for(int j=n-2;j>=0;j--){
                rmax[j]=max(rmax[j+1],height[j]);
            }
        for(int i=1;i<n-1;i++){
            res=res+(min(lmax[i],rmax[i]))-height[i];
        }
        
        return res;
    }
};