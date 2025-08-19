class Solution {
    public long zeroFilledSubarray(int[] nums) {
    long total = 0;
    int consecutiveZeros = 0;

    for (int num : nums) {
        if (num == 0) {
            consecutiveZeros++;
            total += consecutiveZeros;
        } else {
            consecutiveZeros = 0; 
        }
    }

    return total;
}

}