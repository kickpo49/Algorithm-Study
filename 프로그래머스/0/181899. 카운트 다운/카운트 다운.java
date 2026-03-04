// class Solution {
//     public int[] solution(int start_num, int end_num) {
//         int[] answer = new int[start_num - end_num + 1];
//         for (int i = 0; i < answer.length; i++) {
//             answer[i] = start_num - i;
//         }
//         return answer;
//     }
// }

class Solution {
    public int[] solution(int start_num, int end_num) {
        // 배열 크기 계산
        int size = start_num - end_num + 1;
        int[] answer = new int[size];
        
        // 반복문 사용 - 1씩 감소시키며 저장
        for (int i = 0; i < size; i++) {
            answer[i] = start_num - i;
        }
        return answer;
    }
}