class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        // a, b 모두 짝수인 경우
        if (a % 2 == 0 && b % 2 == 0) {
            answer = Math.abs(a - b);
        }
        // a, b 모두 홀수인 경우
        else if (a % 2 != 0 && b % 2 != 0) {
            answer = (a * a) + (b * b);
        }
        // 하나는 홀수, 하나는 짝수인 경우
        else {
            answer = 2 * (a + b);
        }
        return answer;
    }
}

// class Solution {
//     public int solution(int a, int b) {
//         // 홀수 여부를 미리 파악 (가독성 + 효율성)
//         boolean aIsOdd = (a % 2 != 0);
//         boolean bIsOdd = (b % 2 != 0);

//         // 1. 둘 다 홀수인 경우
//         if (aIsOdd && bIsOdd) {
//             return a * a + b * b;
//         }
        
//         // 2. 둘 중 하나만 홀수인 경우
//         if (aIsOdd || bIsOdd) {
//             return 2 * (a + b);
//         }
        
//         // 3. 둘 다 짝수인 경우 (남은 유일한 케이스)
//         return Math.abs(a - b);
//     }
// }