class Solution {
  double findMaxAverage(List<int> nums, int k) {

    double avg=0;
    for(int i=0;i<k;i++){
        avg+=nums[i];
    }
    double maxavg=avg/k;

    for(int i=1;i<=nums.length-k;i++){
        avg=(avg-nums[i-1]+nums[i+k-1]);
        maxavg=max(maxavg,avg/k);
    }

    return maxavg;

    
  }
}