// class Solution {
//     public String solution(int[] numLog) {
//         String answer = "";
//         for (int i = 1; i < numLog.length; i++) {
//             if (numLog[i] - numLog[i -1] == 1) {
//                 answer += "w";
//             }
//             else if (numLog[i] - numLog[i -1] == -1) {
//                 answer += "s";
//             }
//             else if (numLog[i] - numLog[i -1] == 10) {
//                 answer += "d";
//             }
//             else if (numLog[i] - numLog[i -1] == -10) {
//                 answer += "a";
//             }
//         }
//         return answer;
//     }
// }

// Java에서 String에 += 연산을 사용하면, 매번 새로운 문자열 객체를 생성하기 때문에 메모리와 시간 소모가 크다
// 데이터 양이 많아질수록 성능이 급격히 떨어짐
// 이를 보완하기 위해 StringBuilder를 사용하는 것이 관습적

// 가독성 및 중복 제거: 변수 활용
// numLog[i] - numLog[i-1] 연산을 조건문마다 반복
// 이를 변수 하나에 담아두면 코드가 훨씬 깔끔함

// class Solution {
//     public String solution(int[] numLog) {
//         // 1. 효율적인 문자열 합치기를 위해 StringBuilder 사용
//         StringBuilder sb = new StringBuilder();
        
//         for (int i = 1; i < numLog.length; i++) {
//             // 2. 차이값을 미리 계산하여 중복 연산 방지
//             int diff = numLog[i] - numLog[i - 1];
            
//             // 3. 조건문을 조금 더 간결하게 (switch문도 좋은 대안입니다)
//             if (diff == 1) sb.append("w");
//             else if (diff == -1) sb.append("s");
//             else if (diff == 10) sb.append("d");
//             else if (diff == -10) sb.append("a");
//         }
        
//         return sb.toString();
//     }
// }

// class Solution {
//     public String solution(int[] numLog) {
//         StringBuilder answer = new StringBuilder();
        
//         // 1. numLog[1]부터 순회 시작
//         for (int i = 1; i < numLog.length; i++) {
//             // 2. 현재 값과 이전 값의 차이 계산
//             int diff = numLog[i] - numLog[i-1];
            
//             // 3. 차이에 따른 문자 매칭 (switch문 활용 추천)
//             switch (diff) {
//                 case 1:  answer.append("w"); break;
//                 case -1: answer.append("s"); break;
//                 case 10: answer.append("d"); break;
//                 case -10: answer.append("a"); break;
//             }
//         }
        
//         // 4. StringBuilder를 String으로 변환하여 반환
//         return answer.toString();
//     }
// }

class Solution {
    public String solution(int[] numLog) {
        StringBuilder answer = new StringBuilder();
        
        // 1. numLog[1]부터 순회 시작
        for (int i = 1; i < numLog.length; i++) {
            // 2. 현재 값과 이전 값의 차이 계산
            int diff = numLog[i] - numLog[i-1];
            
            // 3. Java 12+ "Switch Expressions"
            // break를 일일이 쓰지 않아도 됨. 실수로 break를 빼먹어서 발생하는 'Fall-through' 버그를 원천 차단
            switch (diff) {
                case 1 -> answer.append("w");
                case -1 -> answer.append("s");
                case 10 -> answer.append("d");
                case -10 -> answer.append("a");
            }
        }
        
        // 4. StringBuilder를 String으로 변환하여 반환
        return answer.toString();
    }
}
