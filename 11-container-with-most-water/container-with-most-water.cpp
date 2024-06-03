class Solution {
public:
    int maxArea(vector<int>& height) {
         int left=0;
    int right=int(height.size()-1);
    int maxArea=0;
    while(left<=right){
        int actualArea=min(height[left],height[right])*(right-left);
        if(actualArea>maxArea)
            maxArea=actualArea;
        if(height[left]<=height[right])
            left++;
        else if(height[left]>=height[right])
            right--;

    }


    return maxArea;
    }
};