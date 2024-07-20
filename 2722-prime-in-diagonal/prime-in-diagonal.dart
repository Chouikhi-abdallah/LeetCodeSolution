class Solution {
 bool isPrime(int n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;

  for (int i = 3; i <= n ~/ i; i += 2) {
    if (n % i == 0) return false;
  }

  return true;
}
  int diagonalPrime(List<List<int>> nums) {
    int maxPrime=0;
    for(int i=0;i<nums.length;i++){
        int num1=nums[i][i];
        int num2=nums[i][nums.length-i-1];
        if(isPrime(num1))
            maxPrime=max(maxPrime,num1);
        if(isPrime(num2))
            maxPrime=max(maxPrime,num2);    
    }
    return maxPrime;
  }
}