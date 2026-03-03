class Solution {
    public String solution(String[] my_strings, int[][] parts) {
        String answer = "";
        
        for (int i = 0; i < my_strings.length; i++) {
            // substring(시작, 끝+1)을 사용해 필요한 부분만 추출하고 바로 더함. 
            answer += my_strings[i].substring(parts[i][0], parts[i][1] + 1);
        }
        return answer;
    }
}

// AI Code
// class Solution {
//     public String solution(String[] my_strings, int[][] parts) {
//         // 문자열을 효율적으로 이어 붙이기 위해 StringBuilder 사용
//         StringBuilder answer = new StringBuilder();
        
//         for (int i = 0; i < my_strings.length; i++) {
//             // parts[i][0]은 시작 인덱스(s), parts[i][1]은 끝 인덱스(e)
//             int s = parts[i][0];
//             int e = parts[i][1];
            
//             // substring의 두 번째 인자는 '포함되지 않는 끝점'이므로 e + 1이 정확합니다.
//             answer.append(my_strings[i].substring(s, e + 1));
//         }
        
//         return answer.toString();
//     }
// }