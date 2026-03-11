class Solution {
    public int bitwiseComplement(int n) {
        String binary = Integer.toBinaryString(n);
        return binaryToDecimal(binary);
    }
    public int binaryToDecimal(String binary){
        int result=0;
        for (int i = 0; i < binary.length(); i++) {
            char c = binary.charAt(i);
            if (c == '0') {
                result += Math.pow(2, binary.length() - 1 - i);
            }
        }
        return result;
    }
}