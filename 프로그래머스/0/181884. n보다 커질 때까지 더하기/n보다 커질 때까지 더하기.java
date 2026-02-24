class Solution {
    public int solution(int[] numbers, int n) {
        int sum = 0;
        for (int i = 0; i < numbers.length; i++) {
            sum += numbers[i];
            if (sum > n) {
                return sum; // sum이 n보다 커지는 순간 즉시 반환
            }
        }
        return sum; // 루프가 끝날 때까지 n을 넘지 못했을 경우 현재 sum 반환
    }
}