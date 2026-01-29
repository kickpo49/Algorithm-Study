class Solution {
    public int[] solution(int[] arr) {
        // 결과 배열 X의 전체 길이를 계산 (모든 원소의 합)
        int totalLength = 0;
        for (int num : arr) {
            totalLength += num;
        }
        // 계산된 길이만큼 결과 배열 생성
        int[] answer = new int[totalLength];
        
        int idx = 0;
        for (int a : arr) {
            for (int i = 0; i < a; i++) {
                answer[idx] = a;
                idx++;
            }
        }
        return answer;
    }
}