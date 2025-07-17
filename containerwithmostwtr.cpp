// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp,rp,area,maxwater,width,len,n;
        n= height.size();
        maxwater=0;
        lp=0;
        rp=n-1;
        while(lp<rp){
            width=rp-lp;
            len=min(height[lp],height[rp]);
            area=width*len;
            maxwater=max(maxwater,area);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxwater;
        
    }
};