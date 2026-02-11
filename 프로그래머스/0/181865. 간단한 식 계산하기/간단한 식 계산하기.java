// class Solution {
//     public int solution(String binomial) {
//         int answer = 0;
        
//         if (binomial.contains("+")) {
//             String[] parts = binomial.split("\\+");
//             int a = Integer.parseInt(parts[0].trim());
//             int b = Integer.parseInt(parts[1].trim());
//             answer = a + b;
//         }
//         else if (binomial.contains("-")) {
//             String[] parts = binomial.split("-");
//             int a = Integer.parseInt(parts[0].trim());
//             int b = Integer.parseInt(parts[1].trim());
//             answer = a - b;
//         }
//         else {
//             String[] parts = binomial.split("\\*");
//             int a = Integer.parseInt(parts[0].trim());
//             int b = Integer.parseInt(parts[1].trim());
//             answer = a * b;
//         }
//         return answer;
//     }
// }

class Solution {
    public int solution(String binomial) {
        String[] parts = binomial.split(" ");
        int a = Integer.parseInt(parts[0]);
        int b = Integer.parseInt(parts[2]);
        
        if (binomial.contains("+")) {
            return a + b;
        }
        else if (binomial.contains("-")) {
            return a - b;
        }
        
        return a * b;
    }
}


// **코드 최적화**
// class Solution {
//     public int solution(String binomial) {
//         String[] parts = binomial.split(" ");
//         int a = Integer.parseInt(parts[0]);
//         String op = parts[1];
//         int b = Integer.parseInt(parts[2]);
        
//         if (op.equals("+")) return a + b;
//         if (op.equals("-")) return a - b;
//         return a * b;
//     }
// }





// 정규표현식의 특수 문자
// split() 메서드는 정규표현식을 사용하는데, +와 *는 정규표현식에서 특별한 의미를 가집니다:

// + : "1번 이상 반복"을 의미
// * : "0번 이상 반복"을 의미
// - : 특수 문자 아님, 그냥 문자 그대로



// 정규표현식 특수 문자 정리
// 이스케이프 필요한 것들:

// + → \\+
// * → \\*
// . → \\. (모든 문자를 의미)
// ? → \\? (0번 또는 1번)
// | → \\| (OR 연산)
// ^ → \\^ (시작)
// $ → \\$ (끝)
// ( ) [ ] { } → 각각 이스케이프 필요