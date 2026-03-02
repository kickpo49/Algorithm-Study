class Solution {
    public int[] solution(int n, int k) {

        // n 이하의 k의 배수 개수를 계산하여 배열 크기 지정
        int count = n / k;
        int[] answer = new int[count];
        
        // 2. 반복문을 돌며 k의 배수를 순서대로 채움
        for (int i = 0; i < count; i++) {
            answer[i] = k * (i + 1);
        }
        return answer;
    }
}


// i = k부터 시작해서 k씩 증가시키며 n 이하인 값을 리스트에 추가
// 최종적으로 int[] 배열로 변환하여 반환
// import java.util.*;

// class Solution {
//     public int[] solution(int n, int k) {
//         List<Integer> list = new ArrayList<>();
//         for (int i = k; i <= n; i += k) {
//             list.add(i);
//         }
//         return list.stream().mapToInt(Integer::intValue).toArray();
//     }
// }