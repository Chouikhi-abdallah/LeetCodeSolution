class Solution {
    public int bitwiseComplement(int n) {

        String binaryString = Integer.toBinaryString(n);
        String res = "";

        for (int i = 0; i < binaryString.length(); i++) {
            if (binaryString.charAt(i) == '1') {
                res += '0';
            } else {
                res += '1';
            }
        }

        return Integer.parseInt(res, 2);
    }
}