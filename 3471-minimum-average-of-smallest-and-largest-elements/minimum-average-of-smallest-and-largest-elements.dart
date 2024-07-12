class Solution {
 double minimumAverage(List<int> nums) {
  nums.sort();
  List<double>l=[];
  int left=0;
  int right=nums.length-1;
  while(left<right){
    l.add((nums[left]+nums[right])/2);
    left++;
    right--;
    
  }
  l.sort();
  
  return l[0];


}
}