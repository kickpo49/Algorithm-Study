class Solution {
    public int[] solution(String myString) {
        // x가 몇 개 있는지 확인 > 배열 크기 결정
        int xCount = 0;
        for (int i = 0; i < myString.length(); i++) {
            if (myString.charAt(i) == 'x') {
                xCount++;
            }
        }
        // x가 n개면 구간은 n+1개
        int[] answer = new int[xCount + 1];
        
        // 각 구간 길이 계산
        int idx = 0;    // answer index
        int length = 0; // 현재 구간 길이
        
        for (int i = 0; i < myString.length(); i++) {
            if (myString.charAt(i) == 'x') {
                answer[idx] = length;   // 현재 구간 길이 저장
                idx++;                  // 다음 구간 이동
                length = 0;             // 길이 초기화
            }
            else {
                length++;
            }
        }
        // 마지막 구간 적용
        answer[idx] = length;
        
        return answer;
    }
}

// split(구분자, 제한)
// 양수를 쓰면 (최대 분할 횟수)
// str.split("x", 2)   ["a", "bxxc"]  최대 2개로 분할
// str.split("x", 3)   ["a", "b", "xc"]  최대 3개로 분할

// class Solution {
//     public int[] solution(String myString) {
//         String[] parts = myString.split("x", -1);
            // "x": 이 문자를 기준으로 자릅니다
            // -1: 모든 결과를 포함 (빈 문자열도 포함)
//         int[] answer = new int[parts.length];
        
//         for (int i = 0; i < parts.length; i++) {
//             answer[i] = parts[i].length();
//         }
        
//         return answer;
//     }
// }