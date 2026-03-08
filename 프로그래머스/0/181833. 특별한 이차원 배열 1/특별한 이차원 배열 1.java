// int[][] arr = new int[n][n] 으로 2차원 배열을 선언하면, 자바는 모든 값을 자동으로 0으로 초기화

class Solution {
    public int[][] solution(int n) {
        int[][] answer = new int[n][n];
        
        for (int idx = 0; idx < n; idx++) {
            answer[idx][idx] = 1;
        }
        return answer;
    }
}