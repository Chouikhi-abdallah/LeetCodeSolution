class Solution {
  int maxProfit(List<int> prices) {
    int left = 0;
    int right = left+1;
    int maxProfit=0;
    while(right<prices.length){
        if(prices[right]-prices[left]>=0){
            maxProfit=max(maxProfit,prices[right]-prices[left]);
            right++;
            }
        else{
            left=right;
            right++;
        }   

    }

    return maxProfit;


    
  }
}