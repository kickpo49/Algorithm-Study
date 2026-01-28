// import java.util.Arrays;

// class Solution {
//     public String[] solution(String[] strArr) {
//         // 배열을 스트림으로 변환 -> "ad"를 포함하지 않는 것만 필터링 -> 다시 배열로 변환
//         return Arrays.stream(strArr)
//                      .filter(s -> !s.contains("ad"))
//                      .toArray(String[]::new);
//     }
// }

class Solution {
    public String[] solution(String[] strArr) {
        // 1. "ad"가 포함되지 않은 문자열의 개수를 먼저 셉니다.
        int count = 0;
        for (int i = 0; i < strArr.length; i++) {
            if (!strArr[i].contains("ad")) {
                count++;
            }
        }

        // 2. 위에서 구한 개수(count)만큼의 크기를 가진 새 배열을 생성합니다.
        String[] answer = new String[count];
        
        // 3. 다시 배열을 돌면서 "ad"가 없는 문자열만 새 배열에 순서대로 넣습니다.
        int index = 0;
        for (int i = 0; i < strArr.length; i++) {
            if (!strArr[i].contains("ad")) {
                answer[index] = strArr[i];
                index++; // 새 배열의 다음 칸을 가리키도록 인덱스 증가
            }
        }

        return answer;
    }
}