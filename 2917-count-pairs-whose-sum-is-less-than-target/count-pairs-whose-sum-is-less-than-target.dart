class Solution {
  int countPairs(List<int> nums, int target) {
  
  if(nums.length==0)
    return 0;

  int n=nums.length ;
  int count=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(nums[i]+nums[j]<target)
        count++;
    }
  }

  return count;


}
}